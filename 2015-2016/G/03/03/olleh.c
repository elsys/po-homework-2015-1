 #include <stdio.h>
#include <stdlib.h>

int main()
{
    char n[20];
    int lng;
    int i=0;
   printf("enter word=");gets(n);
    lng=strlen(n);

for(i=-1;i<=lng-1;lng--)
{
    printf("%c",n[lng]);
}

    return 0;
}

