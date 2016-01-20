#include <stdio.h>

int is_prime(int a){
    int i, flag=0;
    for(i=2;i<=a/2;++i)
  {
      if(a%i==0)
      {
          flag=1;
          break;
      }
  }
  if (flag==0)
      printf("1");
  else
      printf("0");

}

int main()
{
    int a;
    scanf("%d", &a);
    is_prime(a);

   return 0;
}
