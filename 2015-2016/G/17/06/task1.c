#include <stdio.h>

int is_prime (int);
int main()
{
int num,i;
scanf("%d",&num);
i=is_prime(num);
printf("%d",i);
return 0;
}

int is_prime (int num)
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





