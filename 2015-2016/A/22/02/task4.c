#include <stdio.h>
#include <string.h>

int main()
{
	int n=0, i=0, p=0, t=0;
	char a[100];
	scanf("%s",a);
	i=strlen(a);
	while(n!=i)
	{
		p=n+1;
		t=1;
		if(a[n]!='*')
		{
			while (p!=i)
			{
				if (a[p]==a[n])
				{
					t++;
					a[p]='*';
				}
				p++;	
			}
			printf("%c %d\n",a[n],t);			
		}
		a[n]='*';
		n++;
	}
	//while(a!=0)
	//{
	//	i=1;
	//	n=a%10;
	//	a=a/10;
	//	b=a;
	//	while (b!=0)
	//	{
	//		p=b%10;
	//		b=b/10;
	//		if (p==n)
	//		{
	//			i++;
	//		}
	//	}
	//	printf("%d %d\n",n,i);
	//}
	return 0;
}
