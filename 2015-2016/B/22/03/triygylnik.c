#include <stdio.h>
#include <stdlib.h>
int main(){
	int g,i,kappa,n,l=1,z=1,k;
	printf("wywedi  N:");
 	 	scanf("%d", &g);
        	printf("\n");
  		i=2*g-1;
		k=i/2;
		n=k;
 for(kappa=0;kappa<g;kappa++)
{
              for(;n>0;n--) printf(" ");
			
			 
			while(l<=z){
			printf("@");
			l++;
			}
		l=1;
		z=z+2;
		printf("\n");
		k--;
		n=k;
   						
}
		
			
        

 return 0;
}
