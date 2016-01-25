#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{

    int n,i=0,j,a;
    char c[4];

    scanf("%d",&n);

   sprintf(c,"%x",n);
   a=strlen(c);

   for (i=0;i<a ;i++){
        c[i]=toupper(c[i]);
   }

 char b[a];

      for(i=a-1,j=0;i>=0;i--,j++)

     	b[j]=c[i];
     	b[j]='\0';


      if(strcmp(b,c) != 0)
      {
        char s1[a];
    	char s2[a];
            do {
                sprintf(s1,"%d",n);
                a=strlen(s1);

                for (i=a-1,j=0;i>=0;i--,j++)

                s2[j]=s1[i];
                s2[j]='\0';

                n=n+1;

                }while(strcmp(s1,s2) != 0);
                printf("\n%d",n-1);

      }else
    printf("%s",c);

    return 0;
}
