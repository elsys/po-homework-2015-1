include<stdio.h>
int main()

do {
 
 scanf("%s", word);
-printf("%s\n", word);




if (word[0] == 'S' && word[1] == 'T' && word[2] == 'O' && word[3] == 'P') {
    break;
} else {
    
    int e = 0;
    for (; e < 100; e++) {
        if (word[e] >= 'a' && word[e] <= 'z') {
            word[e] -= 32;
        }
    }

    printf("%s\n", word);
}
 
 } while(1);
