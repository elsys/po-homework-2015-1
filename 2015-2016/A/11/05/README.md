# Assignment report
---
Mon Jan 11 22:06:02 2016

## Evaluating task1.c

**File successfully compiled**

### Task details:

Name: rotr

Description: https://docs.google.com/presentation/d/1qtS_InM-Jb2NnXoq28iCLqruC1uItbMSonSd7DRXgiE/edit#slide=id.gcd29c2a72_1_45

Points: 5
Test case 0 passed ✔︎ 

 Final points are 5
## Evaluating task2.c

**File compiled with error or warnings**

```
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c: In function ‘main’:
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:47:3: warning: passing argument 1 of ‘next_generation’ makes integer from pointer without a cast [enabled by default]
   next_generation(currentGen, nextGen, n);
   ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:3:6: note: expected ‘int’ but argument is of type ‘int *’
 void next_generation(int current, int next, int length);
      ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:47:3: warning: passing argument 2 of ‘next_generation’ makes integer from pointer without a cast [enabled by default]
   next_generation(currentGen, nextGen, n);
   ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:3:6: note: expected ‘int’ but argument is of type ‘int *’
 void next_generation(int current, int next, int length);
      ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c: In function ‘next_generation’:
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:70:18: error: subscripted value is neither array nor pointer nor vector
   else if(current[i-1] != current[i+1])
                  ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:70:34: error: subscripted value is neither array nor pointer nor vector
   else if(current[i-1] != current[i+1])
                                  ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:72:9: error: subscripted value is neither array nor pointer nor vector
     next[i]=1;
         ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:77:9: error: subscripted value is neither array nor pointer nor vector
     next[i]=0;
         ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:82:33: error: subscripted value is neither array nor pointer nor vector
  for(i=0; i<length; i++) current[i] = next[i];
                                 ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/11/05/task2.c:82:43: error: subscripted value is neither array nor pointer nor vector
  for(i=0; i<length; i++) current[i] = next[i];
                                           ^
```

### Task details:

Name: next_generation

Description: https://docs.google.com/presentation/d/1qtS_InM-Jb2NnXoq28iCLqruC1uItbMSonSd7DRXgiE/edit#slide=id.gcd29c2a72_1_45

Points: 10
Test case 0 failed ✘ 

---
Expected:
```
.*.*......
```
But was:
```
5 0 1
```

 Final points are 0
