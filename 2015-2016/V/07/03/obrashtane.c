#include <stdio.h>
#include <string.h>

int main()
{
	char a[10000],b;
	printf("\nVavedi tekst:");
	fgets(a,sizeof a,stdin);
	int i,l;
	l=strlen(a)-1;
	for(i=0;i<l;i++,l--)
	{
		b=a[i];
		a[i]=a[l];
		a[l]=b;
	}
	printf("%s\n",a);
	return 0;
}