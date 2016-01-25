#include<stdio.h>

int main()
{
int l=0,i,r;
char n; 
char arr[160];

do
{
scanf("%c",&n);
arr[l]=n;
l++;
}
while(n!='\n');


for(i=0;i<l;i++)
{
if(arr[i]=='a')
r++;

else if(arr[i]=='b')
r=r+2;
else if(arr[i]=='c')
r=r+3;
else if(arr[i]=='d')
r=r+1;
else if(arr[i]=='e')
r=r+2;
else if(arr[i]=='f')
r=r+3;
else if(arr[i]=='g')
r=r+1;
else if(arr[i]=='h')
r=r+2;
else if(arr[i]=='i')
r=r+3;
else if(arr[i]=='j')
r=r+1;
else if(arr[i]=='k')
r=r+2;
else if(arr[i]=='l')
r=r+3;
else if(arr[i]=='m')
r=r+1;
else if(arr[i]=='n')
r=r+2;
else if(arr[i]=='o')
r=r+3;
else if(arr[i]=='p')
r=r+1;
else if(arr[i]=='q')
r=r+2;
else if(arr[i]=='r')
r=r+3;
else if(arr[i]=='s')
r=r+4;
else if(arr[i]=='t')
r=r+1;
else if(arr[i]=='u')
r=r+2;
else if(arr[i]=='v')
r=r+3;
else if(arr[i]=='w')
r=r+1;
else if(arr[i]=='x')
r=r+2;
else if(arr[i]=='y')
r=r+3;
else if(arr[i]=='z')
r=r+4;
else if(arr[i]==' ')
r++;
}

printf("%d", r);

return 0;
}

