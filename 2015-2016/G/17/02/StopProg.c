#include<stdio.h>
 
 
 int main() {
 
 char word[100];
 
 do {
 
 scanf("%s", word);





if (word[0] == 'S' && word[1] == 'T' && word[2] == 'O' && word[3] == 'P') {
    break;
} else {
    
    int i = 0;
    for (; i < 100; i++) {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] -= 32;
        }
   }

    printf("%s\n", word);
}
 
 } while(1);
 
 return 0;
 }
