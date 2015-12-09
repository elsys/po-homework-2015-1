#include <stdio.h>
#include <string.h>
char in[1025];
unsigned int a=0, c, i, n, j;

int main()
{
	scanf("%s",in);
	n=strlen(in);
	for( i=0 ; i<n ; i++ )
	{
		while(in[i] == 'x') i++;
		if(i>=n) break;
		c = in[i];
		//a++;
		for( j=i ; j<n ; ++j )
        {
            if(in[j] != 'x' && c == in[j])
            {
                a++;
                in[j]='x';
            }
        }

		if(a>0) printf("-- Number %c exist %d times -->\n",c,a);
		a=0;
	}
	return 0;
}
