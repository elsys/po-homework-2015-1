# Assignment report
Tue Jan 26 00:45:45 2016
## rotr (Task 1)
https://docs.google.com/presentation/d/1qtS_InM-Jb2NnXoq28iCLqruC1uItbMSonSd7DRXgiE/edit#slide=id.gcd29c2a72_1_45

### Testcase 1 failed
Input
```
1 2 3 4
```


Expected
```
3 1 2
```


Output
```
3 1 2 
```

## next_generation (Task 2)
https://docs.google.com/presentation/d/1qtS_InM-Jb2NnXoq28iCLqruC1uItbMSonSd7DRXgiE/edit#slide=id.gcd29c2a72_1_45

Failed compiling

Exit code: 1

Error
```
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:47:19: warning: incompatible pointer to integer conversion passing 'int [20]' to parameter of type 'int' [-Wint-conversion]
  next_generation(currentGen, nextGen, n);
                  ^~~~~~~~~~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:3:26: note: passing argument to parameter 'current' here
void next_generation(int current, int next, int length);
                         ^
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:47:31: warning: incompatible pointer to integer conversion passing 'int [20]' to parameter of type 'int' [-Wint-conversion]
  next_generation(currentGen, nextGen, n);
                              ^~~~~~~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:3:39: note: passing argument to parameter 'next' here
void next_generation(int current, int next, int length);
                                      ^
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:70:18: error: subscripted value is not an array, pointer, or vector
  else if(current[i-1] != current[i+1])
          ~~~~~~~^~~~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:70:34: error: subscripted value is not an array, pointer, or vector
  else if(current[i-1] != current[i+1])
                          ~~~~~~~^~~~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:72:9: error: subscripted value is not an array, pointer, or vector
    next[i]=1;
    ~~~~^~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:77:9: error: subscripted value is not an array, pointer, or vector
    next[i]=0;
    ~~~~^~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:82:33: error: subscripted value is not an array, pointer, or vector
 for(i=0; i<length; i++) current[i] = next[i];
                         ~~~~~~~^~
/Volumes/Data/elsys/po-homework/2015-2016/A/11/05/task2.c:82:43: error: subscripted value is not an array, pointer, or vector
 for(i=0; i<length; i++) current[i] = next[i];
                                      ~~~~^~
2 warnings and 6 errors generated.

```


