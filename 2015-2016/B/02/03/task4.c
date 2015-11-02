#include <stdio.h>
#include <string.h>

int main()
{
	char c[20];
	int i,p=0,k;




    gets(c);
    k=strlen(c);
    for(i=0;i<k;i++)
    {
        if(c[i]=='I')
        {
            if(c[i+1]=='V' || c[i+1]=='X' || c[i+1]=='L' || c[i+1]=='C') p--;
            else p++;
        }
        else if(c[i]=='V') p=p+5;
        else if(c[i]=='X') p=p+10;
        else if(c[i]=='L') p=p+50;
        else if(c[i]=='C') p=p+100;
    }



	if(p<=256) printf("%d", p);
    else printf("ERROR YOUR NUMBER IS TOO HIGH.");
}
