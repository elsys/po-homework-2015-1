#include <stdio.h>
#include <string.h>

int main()
{
    char mas[]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
    char c, c1, buf[160];
    int i, j;

	do{
		gets(buf);
		j=0;
		i=0;
		while(buf[j]!='\0' && buf[j]!=0x0d)
        {
			c=buf[j];
			if(c!=0x20)
			{
				c=c-97;
				if(c>=0 && c<=26)
				{
					i=i+mas[c];
				}
			}
			else i++;
			j++;
		};
	printf("%d",i);
	}while(strcmp(buf,"end"));

	return 0;
}
