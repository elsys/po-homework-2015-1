#include<stdio.h>
#include<string.h>
#define max 100
int main()
{
char s[max];
scanf("%s",s);
int b= strlen(s);
int z=0;
int c=b-1;
while(z<c)
{
if(s[z]!=s[c])
{
  z=1;break;
}
c--;
z++;
}
 if(z==1)
printf("\n 0 \n");
else 
printf("\n 1 \n");
return 0;
}
