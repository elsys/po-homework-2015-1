#include <stdio.h>

int exact_square( int num1);

int main()
{
  int num1,end;
  scanf("%d", &num1 );
  end =  exact_square(num1);
  printf("%d\n",end);

  return 0;
}

int exact_square(int num1){
  int i,end=0;
  for(i=1;i<num1;i++){
    if(num1/i == i) end = 1;
  }
  return end;
}
