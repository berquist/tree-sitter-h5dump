module.exports = grammar({
  name: 'h5dump',

  rules: {
    file: $ => seq(
      'HDF5',
      $.file_name,
      // , repeat(seq($.file_super_block, ))
      $.root_group
    ),

    file_name: $ => $.identifier,

    root_group: $ => seq(
      'GROUP "/" {',
      repeat($.anon_named_datatype),
      optional($.object_id),
      optional($.group_comment),
      repeat($.group_attribute),
      repeat($.group_member),
      '}'
    ),

    datatype: $ => choice(
      $.atomic_type,
      // $.compound_type,
      // $.variable_length_type,
      // $.array_type
    ),

    anon_named_datatype: $ => seq(
      'DATATYPE',
      $.anon_named_type_name,
      '{',
      $.datatype,
      '}'
    ),

    // "the assigned name for anonymous named type is in the form of #oid,
    // where oid is the object id of the type"
    anon_named_type_name: $ => /#\d+/,

    atomic_type: $ => choice(
      $.h5t_integer,
      $.h5t_float,
      // $.h5t_time,
      // $.h5t_string,
      $.h5t_bitfield
      // $.h5t_opaque,
      // $.h5t_reference,
      // $.h5t_enum
    ),

    h5t_integer: $ => choice(
      'H5T_STD_I8BE',
      'H5T_STD_I8LE',
      'H5T_STD_I16BE',
      'H5T_STD_I16LE',
      'H5T_STD_I32BE',
      'H5T_STD_I32LE',
      'H5T_STD_I64BE',
      'H5T_STD_I64LE',
      'H5T_STD_U8BE',
      'H5T_STD_U8LE',
      'H5T_STD_U16BE',
      'H5T_STD_U16LE',
      'H5T_STD_U32BE',
      'H5T_STD_U32LE',
      'H5T_STD_U64BE',
      'H5T_STD_U64LE',
      'H5T_NATIVE_CHAR',
      'H5T_NATIVE_UCHAR',
      'H5T_NATIVE_SHORT',
      'H5T_NATIVE_USHORT',
      'H5T_NATIVE_INT',
      'H5T_NATIVE_UINT',
      'H5T_NATIVE_LONG',
      'H5T_NATIVE_ULONG',
      'H5T_NATIVE_LLONG',
      'H5T_NATIVE_ULLONG'
    ),

    h5t_float: $ => choice(
      'H5T_IEEE_F32BE',
      'H5T_IEEE_F32LE',
      'H5T_IEEE_F64BE',
      'H5T_IEEE_F64LE',
      'H5T_NATIVE_FLOAT',
      'H5T_NATIVE_DOUBLE',
      'H5T_NATIVE_LDOUBLE'
    ),

    h5t_string: $ => seq(
      'H5T_STRING', '{',
      'STRSIZE', $.strsize, ';',
      'STRPAD', $.strpad, ';',
      'CSET', $.cset, ';',
      'CTYPE', $.ctype, ';',
      '}'
    ),

    strsize: $ => $.int_value,
    strpad: $ => choice('H5T_STR_NULLTERM', 'H5T_STR_NULLPAD', 'H5T_STR_SPACEPAD'),
    cset: $ => choice('H5T_CSET_ASCII', 'H5T_CSET_UTF8'),
    ctype: $ => choice('H5T_C_S1', 'H5T_FORTRAN_S1'),

    h5t_bitfield: $ => choice(
      'H5T_STD_B8BE',
      'H5T_STD_B8LE',
      'H5T_STD_B16BE',
      'H5T_STD_B16LE',
      'H5T_STD_B32BE',
      'H5T_STD_B32LE',
      'H5T_STD_B64BE',
      'H5T_STD_B64LE'
    ),

    // opaque: $ => ,
    // reference: $ => ,
    // ref_type: $ => ,
    // compound_type: $ => ,
    // member_type_def: $ => ,
    field_name: $ => $.identifier,
    // variable_length_type: $ => ,
    // array_type: $ => ,
    // dim_sizes: $ => ,
    // dimsize: $ => ,

    attribute: $ => seq(
      'ATTRIBUTE',
      $.attr_name,
      '{',
      $.dataset_type,
      $.dataset_space,
      optional($.data),
      '}'
    ),

    attr_name: $ => $.identifier,

    dataset_type: $ => choice(
      seq('DATATYPE', $.path_name),
      $.datatype
    ),

    enum: $ => seq(
      'H5T_ENUM',
      '{',
      $.enum_base_type,
      $.enum_def,
      '}'
    ),

    // Currently enums can only hold integer type data, but they may be
    // expanded in the future to hold any datatype
    enum_base_type: $ => $.h5t_integer,

    enum_def: $ => seq($.enum_symbol, $.enum_val, ';'),

    enum_symbol: $ => $.identifier,

    enum_val: $ => $.int_value,

    path_name: $ => repeat1($.path_part),

    path_part: $ => token.immediate(seq('/', $.identifier)),

    dataspace: $ => choice(
      $.scalar_space,
      $.simple_space,
      // $.complex_space,
      $.null_space,
    ),

    null_space: $ => 'NULL',
    scalar_space: $ => 'SCALAR',
    simple_space: $ => seq('SIMPLE', '{', $.current_dims, '/', $.max_dims, '}'),
    // complex_space: $ => seq('COMPLEX', '{', $.complex_space_definition, '}'),

    dataset_space: $ => choice(
      seq('DATASPACE', $.path_name),
      $.dataspace
    ),

    current_dims: $ => $.dims,
    max_dims: $ => seq('(', $.max_dim_list, ')'),
    max_dim_list: $ => choice($.max_dim, seq($.max_dim, ',', $.max_dim_list)),
    max_dim: $ => choice($.int_value, 'H5S_UNLIMITED'),

    data: $ => choice(
      seq(
        'DATA',
        '{',
        choice($.scalar_space_data, $.simple_space_data),
        '}'
      ),
      // $.subset
    ),

    scalar_space_data: $ => $.any_element,

    any_element: $ => choice(
      $.atomic_element,
      $.compound_element,
      $.variable_length_element,
      $.array_element,
    ),

    any_data_seq: $ => choice($.any_element, seq($.any_element, ',', $.any_data_seq)),

    atomic_element: $ => choice(
      $.integer_data,
      $.float_data,
      // $.time_data,
      $.string_data,
      $.bitfield_data,
      $.opaque_data,
      $.enum_data,
      $.reference_data
    ),

    // subset
    // start
    // stride
    // count
    // block
    // coor_list
    integer_data: $ => $.int_value,
    // "a floating point number"
    float_data: $ => $._float,
    // adapted from Python
    _float: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits)

      return token(choice(
        seq(digits, '.', optional(digits), optional(exponent)),
        seq(optional(digits), '.', digits, optional(exponent)),
        seq(digits, exponent)
      ))
    },
    // time_data
    // A string is enclosed in double quotes.
    // If a string is displayed on more than one line, string concatenate
    // operator '//' is used.
    string_data: $ => $._string,
    bitfield_data: $ => $.hex_value,
    opaque_data: $ => choice(seq($.hex_value, ':', $.hex_value), $.hex_value),
    enum_data: $ => $.enum_symbol,
    reference_data: $ => choice($.object_ref_data, $.data_region_data, 'NULL'),
    object_ref_data: $ => seq($.object_type, $.object_num),

    object_type: $ => choice('DATASET', 'GROUP', 'DATATYPE'),

    object_id: $ => seq(
      'OBJECTID {',
      $.object_num,
      '}'
    ),

    object_num: $ => choice(
      token.immediate(seq($.int_value, ':', $.int_value)),
      $.int_value
    ),

    data_region_data: $ => seq(
      'DATASET', $.dataset_name, '{',
      optional($.data_region_type), $.data_region_data_list,
      optional($.dataset_type), optional($.dataset_space), optional($.data),
      '}'
    ),
    data_region_type: $ => seq('REGION_TYPE', $.data_region_data_type),
    data_region_data_type: $ => choice('POINT', 'BLOCK'),
    data_region_data_list: $ => choice(
      seq($.data_region_data_info, ',', $.data_region_data_list),
      $.data_region_data_info
    ),
    data_region_data_info: $ => choice($.region_info, $.point_info),
    region_info: $ => seq('(', $.region_vals, ')'),
    region_vals: $ => choice(
      seq($.bound_pair, ',', $.region_vals),
      $.bound_pair
    ),
    bound_pair: $ => seq($.lower_bound, ':', $.upper_bound),
    lower_bound: $ => $.int_value,
    upper_bound: $ => $.int_value,
    point_info: $ => seq('(', $.point_vals, ')'),
    point_vals: $ => choice(
      seq($.int_value, ',', $.point_vals),
      $.int_value
    ),
    compound_element: $ => seq('{', $.any_data_seq, '}'),
    // atomic_simple_data
    simple_space_data: $ => $.any_data_seq,
    variable_length_element: $ => seq('{', $.any_data_seq, '}'),
    array_element: $ => seq('[', $.any_data_seq, ']'),
    named_datatype: $ => seq('DATATYPE', $.type_name, '{', $.datatype, '}'),
    type_name: $ => $.identifier,
    hardlink: $ => seq('HARDLINK', $.path_name),
    group: $ => seq('GROUP', $.group_name, '{', choice($.hardlink, $.group_info), '}'),
    group_comment: $ => seq('COMMENT', $.string_data),
    group_name: $ => $.identifier,
    group_info: $ => seq(
      optional($.object_id),
      optional($.group_comment),
      repeat($.group_attribute),
      repeat($.group_member)
    ),
    group_attribute: $ => $.attribute,
    group_member: $ => choice(
      $.named_datatype,
      $.group,
      $.dataset,
      $.softlink,
      $.external_link
    ),
    dataset: $ => seq('DATASET', $.dataset_name, '{', choice($.hardlink, $.dataset_info), '}'),
    dataset_info: $ => seq(
      $.dataset_type,
      $.dataset_space,
      // optional($.dcpl_info),
      repeat($.dataset_attribute),
      optional($.object_id),
      optional($.data)
    ),
    // dcpl_info
    dataset_name: $ => $.identifier,
    // storagelayout
    // contiguous_layout
    // chunked_layout
    dims: $ => seq('(', $.dims_values, ')'),
    dims_values: $ => choice($.int_value, seq($.int_value, ',', $.dims_values)),
    // compact_layout
    // internal_layout
    // external_layout
    // external_file
    offset: $ => seq('OFFSET', $.int_value),
    size: $ => seq('SIZE', $.int_value),
    // filter_ratio
    // compressionratio
    // compression_filters
    // filter_type
    // filter_default
    // filter_available
    // filter_deflate
    // filter_shuffle
    // filter_fletcher
    // filter_szip
    // filter_szip_mode
    // filter_szip_coding
    // filter_szip_order
    filter_szip_header: $ => seq('HEADER', 'RAW'),
    filter_nbit: $ => seq('CHECKSUM', 'FLETCHER32'),
    filter_scaleoffset: $ => seq('COMPRESSION', 'SCALEOFFSET', '{', 'MIN', 'BITS', $.int_value, '}'),
    filter_user: $ => seq('USER_REGISTERED_FILTER', '('),
    filter_unknown: $ => seq('UNKNOWN_FILTER', '{'),
    filter_comment: $ => seq('COMMENT', $.identifier),
    filter_params: $ => seq('PARAMS', '{', repeat($.int_value), '}'),
    // fillvalue: $ => seq('FILLVALUE', '{', ),
    // allocationtime: $ => seq('ALLOCATION_TIME', '{'),
    dataset_attribute: $ => $.attribute,
    softlink: $ => seq('SOFTLINK', $.softlink_name, '(', 'LINKTARGET', $.target, '}'),
    softlink_name: $ => $.identifier,
    target: $ => $.identifier,
    external_link: $ => seq(
      'EXTERNAL_LINK',
      $.external_link_name,
      '{',
      'TARGETFILE', $.targetfile,
      'TARGETPATH', $.targetpath, optional($.targetobj),
      '}'
    ),
    external_link_name: $ => $.identifier,
    targetfile: $ => $.file_name,
    targetpath: $ => $.identifier,
    targetobj: $ => choice($.named_datatype, $.group, $.dataset),

    // The BNF grammar just says 'a string'.  Stolen from JSON "string" for now.
    identifier: $ => $._string,
    // character '/' should be used with care.
    _string: $ => choice(
      seq('"', '"'),
      seq('"', $._string_content, '"')
    ),
    _string_content: $ => repeat1(choice(
      token.immediate(prec(1, /[^\\"\n]+/)),
      $._escape_sequence
    )),
    _escape_sequence: $ => token.immediate(seq(
      '\\',
      /(\"|\\|\/|b|f|n|r|t|u)/
    )),

    pos_list: $ => choice(seq($.pos_int, ', ', $.pos_list), $.pos_int),
    int_value: $ => choice('0', $.pos_int),
    pos_int: $ => /[1-9][0-9]*/,
    hex_value: $ => choice(/0x[0-F][0-F]+/, /[0-F][0-F]+/)
  }
});
