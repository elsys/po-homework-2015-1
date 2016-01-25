#include<stdio.h>

int main()
{ 
int d,i=0,j,temp,k,l;
int digit[1000];


  do
{
  scanf("%d",&d);
  if(d!=42)
 {
  digit[i]=d;
  i++;
 }

}
while(d!=42);
for(k=0;k<i;k++)
{
  for(l=0;l<i-1;l++)
  {  if(digit[l]>digit[l+1])
   { temp=digit[l];
    digit[l]=digit[l+1];
    digit[l+1]=temp;
   }
  }
}
for(j=0;j<i;j++)
{printf("%d\t",digit[j]);}


return 0;
}
