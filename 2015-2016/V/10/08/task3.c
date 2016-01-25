#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

	int n; //broi na eleni
	int i; //broqch
	int j,m; 
	int rudolf;
	
	
	
	
	//vuvejdane na broq na eleni
	
	do{
	 
	scanf("%d",&n);	
	}
	
	while(n%2==0 || n<=0 ||n>199);
	
	//vuvejdane na nomerata na eleni
	
	int e[n-1];
	for(i=0;i<n;i++)
	{	
	    do
	    {
	    	scanf("%d",&e[i]);
	    }
		while (e[i]<1 || e[i]>100);
		
	
	}
	// tursene na rudolf
	
	for(i=0;i<n;i++)
	{
		
		m=e[i];
		
		e[i]=0;
		
		
		for (j=0;j<n;j++)
		{
			if (e[j]==m)
			{e[i]=m;
			break;}
			
			
		}
		if (e[i]==0)
		{rudolf=m;
		break;}
				
	}
		printf("\n%d", rudolf);
		return 0;
	
}
		
