#include <stdio.h>
int main()
{
    int a,n=0,m;
    char masiv1[64],masiv2[64];
    gets(masiv1);
    a=strlen(masiv1);
    m=a;
    while(n<=a)
    {
	n+1;
        masiv2[m]=masiv1[n];
        m--;
    }
    while(m<=a)
    {
	m+1;
        printf("%c",masiv2[m]);
    }
    return 0;
}
