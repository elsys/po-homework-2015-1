# Assignment report
---
Mon Jan 11 22:12:40 2016

## Evaluating task1.c

**File successfully compiled**

### Task details:

Name: is_prime

Description: https://drive.google.com/drive/folders/0B83l5t-0yjU7ZjlDcVZTVnBzLVk

Points: 5
Test case 0 passed ✔︎ 
Test case 1 passed ✔︎ 

 Final points are 5
## Evaluating task3.c

**File successfully compiled**

### Task details:

Name: create_letter_distribution_diagram

Description: https://drive.google.com/drive/folders/0B83l5t-0yjU7ZjlDcVZTVnBzLVk

Points: 15
Test case 0 failed ✘ 

---
Expected:
```
e: 6 s: 4 a: 3 i: 2 l: 2 n: 2 t: 2 c: 1 h: 1 m: 1 o: 1 r: 1 w: 1 y: 1 b: 0 d: 0 f: 0 g: 0 j: 0 k: 0 p: 0 q: 0 u: 0 v: 0 x: 0 z: 0
```
But was:
```
e: 6 s: 4 a: 3 i: 2 l: 2 n: 2 t: 2 c: 1 h: 1 m: 1 o: 1 r: 1 w: 1 y: 1 K: 0 b: 0 d: 0 f: 0 g: 0 j: 0 k: 0 p: 0 q: 0 u: 0 v: 0 x: 0
```

 Final points are 0
## Evaluating task2.c

**File compiled with error or warnings**

```
/home/tsvetelina/elsys/po-homework/2015-2016/B/17/04/task2.c: In function ‘main’:
/home/tsvetelina/elsys/po-homework/2015-2016/B/17/04/task2.c:9:5: warning: format ‘%f’ expects argument of type ‘double’, but argument 2 has type ‘int’ [-Wformat=]
     printf("%f\n",exact_square(num));
     ^
/tmp/ccw2PvEq.o: In function `exact_square':
task2.c:(.text+0x5c): undefined reference to `sqrt'
task2.c:(.text+0x7b): undefined reference to `floor'
collect2: error: ld returned 1 exit status
```

### Task details:

Name: exact_square

Description: https://drive.google.com/drive/folders/0B83l5t-0yjU7ZjlDcVZTVnBzLVk

Points: 5
