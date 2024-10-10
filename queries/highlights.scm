[
    "include"
    "namespace"
    "attribute"
    "table"
    "struct"
    "union"
    "enum"
    "root_type"
    "rpc_service"
    "file_extension"
    "file_identifier"
] @keyword

[
  ";"
  "."
  ","
] @punctuation.delimiter

(type) @type
(string_constant) @string

[
    (true)
    (false)
    (inf_token)
    (nan_token)
] @constant.builtin

[
    (float_constant)
    (int_constant)
] @number

[
    (comment)
    (documentation)
] @comment

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
]  @punctuation.bracket
