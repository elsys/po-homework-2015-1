#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//Chete izrecheniq ot standartniq vhod dokato ne  sreshtne dumata STOP.
//Za vsqko procheteno izrechenie da se izvede izcqlo s glavni bukvi.
void main ()
{

   char izrechenie[100];
   int  i, lenght;

while(1){
        printf("Vuvedete izrechenie \n");
        scanf("%s", izrechenie);

        if(strcmp (izrechenie,"STOP") == 0)
            {
                printf("\nDovijdane :)");
                break;
            }

        lenght=strlen(izrechenie);
        for(i=0; i<lenght; i++)
        {
			if(izrechenie[i] >= 'a' && izrechenie[i] <= 'z')
			{
				izrechenie[i] -= ('a' - 'A');
			}
		}

        printf("%s\n", izrechenie);
        }
}
