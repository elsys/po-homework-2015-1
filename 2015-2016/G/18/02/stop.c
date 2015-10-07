#include <stdio.h>
int main()
{
char word[100];
do{
scanf("%s",word);
if(word[0] == 'S' && word[1] == 'T' && word[2] == 'O' && word[3] == 'P'){
break;
}else {
int e = 0;
for(; e < 100; e++){
if (word[e] >= 'a' && word[e] <= 'z') {
word[e] -= 32;
}
}
printf("%s", word);
printf("\n");
}
}while(1);
return 0;
}
