#include <stdio.h> 	//Chete izrecheniq ot standartniq vhod dokato ne  sreshtne dumata STOP. Za vsqko procheteno izrechenie da se izvede izcqlo s glavni bukvi.
#include <string.h>

void main () 
{
   
   char c[100];
   int  i, len;
   
   while(1) 
   {
        printf("Input sentence:\n");
        scanf("%s", c);
        
        if(strcmp (c,"STOP") == 0)
           break;
        len=strlen(c);
        for(i=0; i<len; i++)
        {
			if(c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] -= ('a' - 'A');
			}
		}
		
        printf("%s\n", c);
   }
}
