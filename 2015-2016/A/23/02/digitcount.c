#include <stdio.h>

int main()
{
int arr[10]={0};
int num,i;
scanf("%d",&num);
while (num!=0)
{
arr[num%10]++;
num/=10;
}
for (i=0;i<10;i++)
{
printf("\n%d - %d",i,arr[i]);
}
return 0;
}
