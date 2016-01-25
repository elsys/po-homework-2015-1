#include <stdio.h>
#include <string.h>
#define MAXLEN 161

int main()
{
    char str[MAXLEN];
    int i,x=0;
    fgets(str,161,stdin);

    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a' || str[i]=='d' || str[i]=='g'|| str[i]=='j'|| str[i]=='m' || str[i]=='p'|| str[i]=='t' || str[i]=='w')x=x+1;
        if(str[i]=='b' || str[i]=='e' || str[i]=='h'|| str[i]=='k'|| str[i]=='n' || str[i]=='q'|| str[i]=='u' || str[i]=='x')x=x+2;
        if(str[i]=='c' || str[i]=='f' || str[i]=='i'|| str[i]=='l'|| str[i]=='o' || str[i]=='r'|| str[i]=='v' || str[i]=='y')x=x+3;
        if(str[i]=='s' || str[i]=='z')x=x+4;
        if(str[i]==' ')x=x+1;
    }
    printf("%d",x);
    return 0;

}







