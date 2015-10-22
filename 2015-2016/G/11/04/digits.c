#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,chislo[10],p;
    
    printf("Input n;\n");
    scanf("%d",&n);

    while(n>0){

        p=n%10;

        chislo[p]++;

        n=n/10;

    }

 for(i=1;i<=10;i++)
   
    printf("cifrata %d se sreshta %d puti \n",i , cifri[i]);
}
	
	
 
