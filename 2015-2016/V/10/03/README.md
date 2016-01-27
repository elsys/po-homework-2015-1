# Assignment report
## Unrecognized (Task -1)
File name doesn't not match any of filenames conventions

**Filename: obrushtane na niz.c**
## Triangle (Task 1)
https://docs.google.com/presentation/d/1PKipJkyZJxG-_6vHuSciKRCL-OHaZD08dPUeGGyyDis/edit#slide=id.ge4ead636d_3_0

### Testcase 1 failed
Input
```
2
```


Expected
```
* ***
```


Output
```
* *** 
```

## Reverse (Task 2)
https://docs.google.com/presentation/d/1PKipJkyZJxG-_6vHuSciKRCL-OHaZD08dPUeGGyyDis/edit#slide=id.ge4ead636d_3_0

Failed compiling

Exit code: 1

Error
```
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:8:11: warning: implicit declaration of function 'strrev' is invalid in C99 [-Wimplicit-function-declaration]
    rev = strrev(str);
          ^
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:8:9: warning: incompatible integer to pointer conversion assigning to 'char *' from 'int' [-Wint-conversion]
    rev = strrev(str);
        ^ ~~~~~~~~~~~
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:14:7: error: conflicting types for 'strrev'
char *strrev(char *str)
      ^
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:8:11: note: previous implicit declaration is here
    rev = strrev(str);
          ^
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:20:33: warning: implicitly declaring library function 'strlen' with type 'unsigned long (const char *)'
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
                                ^
/Volumes/Data/elsys/po-homework/2015-2016/V/10/03/task2.c:20:33: note: include the header <string.h> or explicitly provide a declaration for 'strlen'
3 warnings and 1 error generated.

```


## Cards (Task 3)
https://docs.google.com/presentation/d/1PKipJkyZJxG-_6vHuSciKRCL-OHaZD08dPUeGGyyDis/edit#slide=id.ge4ead636d_3_0

### Testcase 1 failed
Execution took more than 1 seconds
