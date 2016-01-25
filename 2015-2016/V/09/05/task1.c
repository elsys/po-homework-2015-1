#include <stdio.h>
#include <string.h>

int polindrome();
int main()
{
  polindrome();
  return 0;
}

int polindrome()
{
  char a[100];
  char b[100];
  scanf("%s", a);
  strcpy(b, a);
  strrev(b);
  if(strcmp(a, b) == 0){
    printf("1");
  }
  else{
    printf("0");
  }
  return 0;
}
