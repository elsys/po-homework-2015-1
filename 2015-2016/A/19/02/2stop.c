#include <stdio.h>
#define max 500

int main()
{
    int c,i,sen,array[max];

    c=getchar();
    for(i=0;i<max;i++)
        {
            array[i]=c;
                 if(array[i-5] <=' ' && array[i] <=' '
                  && (array[i-1]=='P' || array[i-1]=='p')
                  && (array[i-2]=='O' || array[i-2]=='o')
                  && (array[i-3]=='T' || array[i-3]=='t')
                  && (array[i-4]=='S' || array[i-4]=='s')) break;
            c=getchar();
        }
    sen=i-5;
    for(i=0;i<sen;i++)
    if(array[i]>='a' && array[i]<='z') array[i]-=32;

    printf("\n");

    for(i=0;i<sen;i++)
     printf("%c", array[i]);
	
	printf("\n\n");

    return 0;
}

