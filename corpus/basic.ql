============
Basic Module
============

import javascript

select
  "hello world" as foo,
  "other",
  "string with escaped \\ backslashes \" quotes \n\r\t whitespace",
  1234,
  1234.4321,
  true,
  false

---

(source_file 
  (ql 
    (moduleBody 
      (import 
        (IMPORT )
        (moduleId 
          (qualId 
            (simpleId 
              (Lowerid )))))
      (select 
        (SELECT )
        (as_exprs 
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (string ))))
            (AS )
            (simpleId 
              (Lowerid )))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (string )))))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (string )))))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (int )))))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (float )))))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (TRUE )))))
          (COMMA )
          (as_expr 
            (expr 
              (primary 
                (literal 
                  (FALSE ))))))))))