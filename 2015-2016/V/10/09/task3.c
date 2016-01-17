#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    int n;
    int i=0,j;
    char h[4];
 
    scanf("%d",&n);


   sprintf(h,"%x",n);
   
    int r=strlen(h);
   
   for (i=0;i<r ;i++)
   h[i]=toupper(h[i]); 
 
   
   char b[r];
   
  
      
      for(i=r-1,j=0;i>=0;i--,j++)
      
     	b[j]=h[i];
     	b[j]='\0';
     
     
        
      if(strcmp(b,h) != 0)
              	
              
      {
      
        char s1[r];
    	char s2[r];
    	
	do {
	
    	sprintf(s1,"%d",n);
    	
    	r=strlen(s1);
    	
    	for (i=r-1,j=0;i>=0;i--,j++)
    	
    	s2[j]=s1[i];
    	s2[j]='\0';
    	
    	n=n+1;
    		
    	}while(strcmp(s1,s2) != 0);
    		
    	printf("\n%d",n-1);	
    		
    		
    }
    else
    printf("%s",h);
    
    return 0;
}




  

 
  




