#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
                 
        char O[100];
 	int i=0,p,k;
   
        fgets(O,100,stdin);
  	p = strlen(O);
        
	k=p;
      for(i=0;i<=k;p--)
{
	printf("%c", O[p]);
	
	i++;
}
printf("\n");
 return 0;
}
