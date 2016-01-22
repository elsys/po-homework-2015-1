#include <stdio.h>
#include <string.h>
char in[1025];
unsigned int a=1, c, i, n, j;

int main()
{
	scanf("%s",in);
	n=strlen(in);
	for(i=0;i<n;i++)
	{
		if(in[i] == 'x') i++;
		if(i>=n) break;
		c = in[i];
		for( j = i+1 ; j < n ; j++ )
        {
            if(in[j] != 'x' && c == in[j])
                {
                    a++;
                    in[j]='x';
                }
        }
		if(a>1) printf("%c",c);
		a=1;
	}
	return 0;
}
