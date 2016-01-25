#include <stdio.h>

int main()
{
	int n, v, p, temp=0, new_num=0, temp1=0, i=0;
	scanf("%d",&n);
	scanf("%d",&v);
	scanf("%d",&p);
	temp=(n>>p);
	if ((temp%2)==v)
	{
		printf("%d\n", n);
	}
	else
	{
		new_num=(temp/2)*2+v;
		i=p;
		while(i!=0)
		{
			temp=n%2;
			n=n/2;
			temp1=temp1*2+temp;
			i--;
		}
		while(p!=0)
		{
			temp=temp1%2;
			temp1=temp1/2;
			new_num=new_num*2+temp;
			p--;
		}
		printf("%d\n", new_num);
	}
	return 0;
}