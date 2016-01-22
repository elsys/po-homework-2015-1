#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int dec_func(char c);
int palindrome(int n);
int main()
{
    int  n;
    char c[100];
    scanf("%d", &n);

    while(palindrome(n)!= 1)
    {
        n++;
    }
    sprintf(c, "%X", n);
    printf("%s", c);


    return 0;
}

int palindrome(int n)
{
    char c[100], str[100];
    int result;
    int i, len, p;
    sprintf(c, "%X", n);
    len = strlen(c);
    p = len - 1 ;
    for(i = 0; i < len; i++)
    {
        str[i]=c[p];
        p--;
    }
	
    str[len] = '\0';
    result = strcmp(c, str);
    return (result == 0) ? 1 : 0;

}


