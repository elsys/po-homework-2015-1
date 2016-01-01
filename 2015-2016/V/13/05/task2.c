#include <stdio.h>
#include <string.h>
int palindrom(char *in);

int main()
{
	char in[1025];
	scanf("%s",in);
	printf("%d\n",palindrom(in));
	return 0;
}

int palindrom(char *in)
{
	int i=0, n;
	if(strlen(in)%2==1) i++;
	n=strlen(in)/2;

	for(;i<n;i++) if(in[i]!=in[2*n-i-1]) return 0;
	return 1;
}
