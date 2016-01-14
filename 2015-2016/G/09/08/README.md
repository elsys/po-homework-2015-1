# Assignment report
---
Thu Jan 14 18:39:36 2016

## Task1.c

File doesn't match naming convention

## task2.c

**File compiled with error or warnings**

```
/home/tsvetelina/elsys/po-homework/2015-2016/G/09/08/task2.c: In function ‘main’:
/home/tsvetelina/elsys/po-homework/2015-2016/G/09/08/task2.c:6:1: error: unknown type name ‘ssize_t’
 ssize_t read; 
 ^
/home/tsvetelina/elsys/po-homework/2015-2016/G/09/08/task2.c:9:1: warning: implicit declaration of function ‘getline’ [-Wimplicit-function-declaration]
 while ((read = getline(&line, &len, stdin)) != -1) { 
 ^
/home/tsvetelina/elsys/po-homework/2015-2016/G/09/08/task2.c:12:4: warning: format ‘%d’ expects argument of type ‘int’, but argument 2 has type ‘size_t’ [-Wformat=]
    if ((line[i + 1] >= 'a' && line[i + 1] <= 'z') || (line[i + 1] >= 'A' && line[i + 1] <= 'Z' )) { counter++; } } } } printf("\nBroi dumi:%d\n", counter); 
    ^
```

