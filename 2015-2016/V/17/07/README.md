# Assignment report
## rotr (Task 1)
https://docs.google.com/presentation/d/1he0lQnT8k7faavvAh3EyKgCmYGMhPpzS3WpOWJUZEYM/edit#slide=id.gcd29c2a72_1_45

Failed compiling

Exit code: 1

Error
```
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:23: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d %d %d %d", a, b, c, n);
               ~~            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:26: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d %d %d %d", a, b, c, n);
                  ~~            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:29: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d %d %d %d", a, b, c, n);
                     ~~            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:32: warning: format specifies type 'int *' but the argument has type 'int' [-Wformat]
        scanf("%d %d %d %d", a, b, c, n);
                        ~~            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:23: warning: variable 'a' is uninitialized when used here [-Wuninitialized]
        scanf("%d %d %d %d", a, b, c, n);
                             ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:6:10: note: initialize the variable 'a' to silence this warning
        int n, a, b, c;
                ^
                 = 0
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:26: warning: variable 'b' is uninitialized when used here [-Wuninitialized]
        scanf("%d %d %d %d", a, b, c, n);
                                ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:6:13: note: initialize the variable 'b' to silence this warning
        int n, a, b, c;
                   ^
                    = 0
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:29: warning: variable 'c' is uninitialized when used here [-Wuninitialized]
        scanf("%d %d %d %d", a, b, c, n);
                                   ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:6:16: note: initialize the variable 'c' to silence this warning
        int n, a, b, c;
                      ^
                       = 0
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:7:32: warning: variable 'n' is uninitialized when used here [-Wuninitialized]
        scanf("%d %d %d %d", a, b, c, n);
                                      ^
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:6:7: note: initialize the variable 'n' to silence this warning
        int n, a, b, c;
             ^
              = 0
/Volumes/Data/elsys/po-homework/2015-2016/V/17/07/task1.c:20:2: error: void function 'rotr' should not return a value [-Wreturn-type]
        return 0;
        ^      ~
8 warnings and 1 error generated.

```


