# Assignment report
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
      *  *** 
```

## Reverse (Task 2)
https://docs.google.com/presentation/d/1PKipJkyZJxG-_6vHuSciKRCL-OHaZD08dPUeGGyyDis/edit#slide=id.ge4ead636d_3_0

Failed compiling

Exit code: 1

Error
```
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task2.c:9:4: warning: implicit declaration of function 'strrev' is invalid in C99 [-Wimplicit-function-declaration]
   strrev(arr);
   ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task2.c:14:2: warning: no newline at end of file [-Wnewline-eof]
}
 ^
2 warnings generated.
Undefined symbols for architecture x86_64:
  "_strrev", referenced from:
      _main in task2-9ac44a.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)

```


## Cards (Task 3)
https://docs.google.com/presentation/d/1PKipJkyZJxG-_6vHuSciKRCL-OHaZD08dPUeGGyyDis/edit#slide=id.ge4ead636d_3_0

Failed compiling

Exit code: 1

Error
```
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:6:6: error: use of undeclared identifier 'i'
        for(i = 0 ; i < 13 ; i++)
            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:6:14: error: use of undeclared identifier 'i'
        for(i = 0 ; i < 13 ; i++)
                    ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:6:23: error: use of undeclared identifier 'i'
        for(i = 0 ; i < 13 ; i++)
                             ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:8:17: warning: format specifies type 'char *' but the argument has type '<dependent type>' [-Wformat]
                scanf("%c%*c",&deck[i]);
                       ~~     ^~~~~~~~
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:8:23: error: use of undeclared identifier 'i'
                scanf("%c%*c",&deck[i]);
                                    ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:9:15: error: use of undeclared identifier 'i'
                switch(deck[i])
                            ^
/Volumes/Data/elsys/po-homework/2015-2016/V/23/03/task3.c:43:2: warning: no newline at end of file [-Wnewline-eof]
}
 ^
2 warnings and 5 errors generated.

```


