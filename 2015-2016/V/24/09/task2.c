#include <stdio.h>
 
 int main()

{
 	int n, i, p, temp=0, new=0, temp1=0, i=0;
 	scanf("%d %d %d", &n, &i, &p);
 	temp=(n>>p);
 	if ((temp%2)==i)
 	{
 		printf("%d\n", n);
 	}
 	else
 	{
 		new=(temp/2)*2+i;
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
 			new=new*2+temp;
 			p--;
 		}
 		printf("%d\n", new);
 	}
 	return 0;
} 
