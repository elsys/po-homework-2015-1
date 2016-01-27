#include <stdio.h>
#include <string.h>

int main()
{
	char m;
	char k[13];
	char k2[13] = {'A','K','Q','J','T','9','8','7','6','5','4','3','2'};
	
	int i,j;
	
	do
	{
	
	scanf("%s",k);
	}while(strlen(k)!=13);
	
	
	do{
		
	
  	for(i=0;i<=12;i++)
  	{
  		for(j=0;j<=12;j++)
  		{
  			if(k2[j]==k[i])
  			{
  				m=k[j];
  				k[j]=k[i];
  				k[i]=m;
  				break;
  			}
  		}
  	}
  	}while(strcmp(k2,k) != 0);
  	
  	printf("%s",k);
  return 0;

}
	

