#include <stdio.h>
#include <string.h>
int main(void)
{
    char s[100], b[100];

   //printf("napishete  bukvi za da se proveri dali nizut s e palindrom\n");
   gets(s);

   strcpy(b,s);
   strrev(b);

   if (strcmp(s,b) == 0)
      printf(" 1\n");
   else
      printf(" 0\n");
	return 0;
}
