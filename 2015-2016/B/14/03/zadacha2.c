#include <stdio.h>
#include<string.h>
int main()
{
char str[350];
int i,a;
char k;

printf("Vuvedi text: ");

fgets(str,sizeof str,stdin);

a=strlen(str)-1;

 for(i=0;i<a;i++)
{
        k=str[i];
        str[i]=str[a];
        str[a]=k;
        a--;
}

 printf("%s",str);

return 0;
}
