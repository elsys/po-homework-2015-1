#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
int main()
{
    int pal;
    int drom;
    int l;
    int opa=1;
    char word[15];

    printf("Vuvedete dyma : ");
    scanf("%[^\n]s",word);

     l = -1;
     while(word[++l]!='\0');

	printf("%d",l);

    for(pal=0,drom=l-1;drom>(l/2)-1;pal++,drom--){
        if(word[pal]!=word[drom]){


            printf("NE e palindrom.");
            opa=0;
            break;

        }
    }
    if(opa){
    printf("Palindrom");
    }


    return 0;
}
