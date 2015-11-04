#include <stdio.h>
int simplenum(int total)
{
int num,i=3;
int flag=0;
scanf("%d",&num);
for(;i<num;i++)
{
  if(num%i==0){
      flag = 1;
   }
}
if(flag == 0){
total = 1;
}
else
  total = 0;
  if(num<3){
  total=-1;
    }

return total;
}
int main(){
int k;
  printf("%d\n",simplenum(k));
}


