#include <stdio.h>

int main()
{
	int arr[1000];
	int i,l,c,tmp;
	for(i=0;i<1000;i++)
	{
		scanf("%d",&tmp);
		if (tmp==42)
			break;
		arr[i]=tmp;
	}
	for (c=0;c<(i-1); c++)
  	{
    		for (l=0;l<i-c-1;l++)
    		{
     			if (arr[l]>arr[l+1])
      		 	{
        			tmp = arr[l];
        			arr[l] = arr[l+1];
        			arr[l+1] = tmp;
      			}
    		}
  	}
	for(l=0;l<i;l++)
	{
		printf("%d\n",arr[l]);
	}
	return 0;
}
