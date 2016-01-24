#include <stdio.h>
int main()
{ 
    char str[50];
    char *rev;
    printf("vuvedi duma: ");
    scanf("%s",str);
    rev = strrev(str);

    printf("obyrnatata dyma e: %s",rev);

    return 0;
}
char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}
