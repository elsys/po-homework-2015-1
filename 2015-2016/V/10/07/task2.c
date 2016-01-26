#include <stdio.h>
#include <string.h>

  void next_generation(int *current,int *next,int lenght);
  void print_generation(int *current,int lenght);
  int check_generation(int *current,int lenght);

int main()
{
	int n,i;
	int j;
	int n1[n];
	
	
	do{
		
		scanf("%d",&n);
	  }while(n>20 || n <0);
	 
	 int c1[n];
	 for(i=0;i<n;i++)
	 {
	  	
			scanf("%d",&c1[i]);
			
	 }
          print_generation(c1,n);
          
          for(i=0;i<1000 && check_generation(c1,n)!=0;i++)
          {
          	next_generation(c1,n1,n);
                print_generation(n1,n);
          	for(j=0;j<n;j++)
          	{
          		c1[j]=n1[j];
          		
          	}
          }


} 
  
  
  void print_generation(int *current,int lenght)
  {
   int j;
   printf("\n");
   for(j=0;j<=lenght-1;j++)
   {
   	if(current[j] == 1)
   	
   		printf("*");
   		
   	else
  	printf(".");
   }
 }
 
  void next_generation(int *current,int *next,int lenght)
  {
  
  	int j;
  	
  	for(j=1;j<lenght;j++)
  	{
  		if((current[j-1]==0 && current[j+1]==1)||(current[j-1]==1 && current[j+1]==0))
  		
  			next[j]=1;
  		else
  			next[j]=0;	
  		
   	}	
   }	 
   
   int check_generation(int *current,int lenght)
   {
   	int sum=0,j;
   	
   	for(j=0;j<lenght;j++)
   	{
   		sum=sum+current[j];
   	}
   	
   return sum;
   }
   	
   	
   	
   	
   	
   	
   		
		
