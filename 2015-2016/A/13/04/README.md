# Assignment report
---
Sat Jan  9 21:46:51 2016

## Evaluating task1.c

**File compiled with error or warnings**

```
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c: In function ‘main’:
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c:11:5: warning: implicit declaration of function ‘strlen’ [-Wimplicit-function-declaration]
     j = strlen(c);
     ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c:11:9: warning: incompatible implicit declaration of built-in function ‘strlen’ [enabled by default]
     j = strlen(c);
         ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c: In function ‘is_prime’:
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c:32:5: warning: implicit declaration of function ‘sqrt’ [-Wimplicit-function-declaration]
     root = sqrt(num);
     ^
/home/tsvetelina/elsys/po-homework/2015-2016/A/13/04/task1.c:32:12: warning: incompatible implicit declaration of built-in function ‘sqrt’ [enabled by default]
     root = sqrt(num);
            ^
/tmp/cc6MvBIB.o: In function `is_prime':
task1.c:(.text+0xe6): undefined reference to `sqrt'
collect2: error: ld returned 1 exit status
```

### Task details:

Name: is_prime

Description: https://drive.google.com/drive/folders/0B83l5t-0yjU7ZjlDcVZTVnBzLVk
