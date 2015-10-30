#include <stdio.h>

int is_prime( int num1);

int main()
{
  int num1,end;
  scanf("%d", &num1 );
  end =  is_prime(num1);
  printf("%d\n",end);

  return 0;
}

int is_prime(int num1){
  int i,end=0;
  for(i=2;i<num1;i++){
    if(num1%i == 0) end = 1;
  }
  if(num1<2) end = -1;
  return end;
}
