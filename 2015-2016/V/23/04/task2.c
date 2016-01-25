#include <stdio.h>

int isMagic(int n, int a[n][n]) {
	int sum=0, sum2 = 0, i, j, flag, sum1;
	for(i=0;i<n;i++)
	    for(j=0;j<n;j++)
	    if(i==j)
	    sum=sum+a[i][j];


	for(i=0;i<n;i++)
	{
	    sum1=0;
	    {
	    for(j=0;j<n;j++)
	    sum1=sum1+a[i][j];
	    }
	    if(sum==sum1)
	        flag=1;
	    else
	        {
	        flag=0;
	        break;
	        }
	}
	for(i=0;i<n;i++)
	{
	    sum2=0;
	    for(j=0;j<n;j++)
	    {
	    sum2=sum2+a[j][i];
	    }
	    if(sum==sum2)
	        flag=1;
	    else
	        {
	        flag=0;
	        break;
	        }
	}

	if(flag==1)
	    return (1);
	else
	    return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	int square[n][n];
	for(int i=0;i<n;i++)
	    for(int j=0;j<n;j++)
	   	 scanf("%d",&square[i][j]);
	printf("%d", isMagic(n, square));
	return 0;
}