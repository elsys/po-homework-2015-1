#include <stdio.h>

int funk (int);
int main()
{
int num,i;
scanf("%d",&num);
i=funk(num);
printf("%d",i);
}

int funk (int num)
{
 int counter=0,i;

 

 for(i=1;i<=num;i++)
  {
    if(num%i==0){counter++;}

  }

if(counter>2)
 i=0;
else
 i=1;

return i;
}





