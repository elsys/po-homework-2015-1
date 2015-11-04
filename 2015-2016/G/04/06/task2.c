#include <stdio.h>
#include <math.h>
int square_root(int reply)
{
  int num;
  float supp;
  scanf("%d",&num);
  supp = sqrt(num);
  if(num/supp == supp)
   {
     reply=1;
   }
    else
     reply=0;
    return reply;
}
int main(){
int answer;
printf("%d\n",square_root(answer));
}


