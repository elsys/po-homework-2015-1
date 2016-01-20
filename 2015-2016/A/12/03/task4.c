#include <stdio.h>
#include <string.h>

int main()
{
	char str[5];
	int l,n=0;
    scanf("%s",str);
    for(l=0;l<strlen(str)-1;l++)
		{
            if(str[l]=='I' && (str[l+1]=='V' || str[l+1]=='X' || str[l+1]=='L' || str[l+1]=='C'))
            {
                n--;
            }
            else if(str[l]=='X' && (str[l+1]=='L' || str[l+1]=='C'))
            {
                n-=10;
            }
			else if(str[l]=='I')
            {
                n++;
            }
			else if(str[l]=='V')
            {
                n+=5;
            }
			else if(str[l]=='X')
            {
                n+=10;
            }
			else if(str[l]=='L')
            {
                n+=50;
            }
			else if(str[l]=='C')
            {
                n+=100;
            }
		}
    if(n>256) // Tuk gleda da ne e nad 256
        printf("Maximum number is 256.");
	else
        printf("%d",n);
        return 0;
}
