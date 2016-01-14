#include <stdio.h>

int main()
{
	int n=0,el[200]={0};

	scanf("%d",&n);

	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&el[i]);
	}


	for (int i = 0; i < n; ++i)
	{
		if(el[i]==-666) continue;
		for (int k = n; k >= 0; k--)
		{
			if (k==i) continue;
			if(el[i]==el[k]) 
			{

				el[k]=-666; 
				el[i]=-664;
				
			}

		}

	}
	
	

	for (int i = 0; i < n; ++i)
	{
		if(el[i]>0)
		{
			printf("%d\n", el[i]);
			break;
		}
	}

	return 0;
}