#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    char str[1000];
    while(1)
    {
        scanf("%s",&str);
        if(str[0]==83 && str[1]==84 && str[2]== 79 && str[3]== 80)
            {
                break;
            }
        for(i = 0; i < 50; i++)
        {
            if(str[i]>='a' && str[i]<='z')
            {
                str[i]=str[i]-32;
            }
        }
        printf("\n%s", str);
    }
}
