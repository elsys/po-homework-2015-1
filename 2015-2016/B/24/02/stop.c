#include<stdio.h>
int main()
{
char words[100];
int i=0;
do{
scanf("\n%s",words);
if(words[0] == 'S' && words[1] == 'T' && words[2] == 'O' && words[3] == 'P'){
break;
}
else{
int f=0;
for(;f<100;f++)
{
if(words[f]>='a'&& words[f]<='z')
{
words[f]-=32;
}
}printf("\n%s",words);
}
}while(1);
return 0;
}
