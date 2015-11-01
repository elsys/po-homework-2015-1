#include <stdio.h>
int main()
{
int i,k,s[4][4];
int t[4][4];
for(i=0;i<4;i++)
{
for(k=0;k<4;k++)
{
scanf("%d",&s[i][k]);
}
}
for(i=0;i<4;i++)
{
for(k=0;k<4;k++)
{
t[k][i]=s[i][k];
}
}
for(i=0;i<4;i++)
{
for(k=0;k<4;k++)
{
printf("%d ",t[i][k]);
}
printf("\n");
}
return 0;
}
