#include <stdio.h>
#include <string.h>

int main()
{
    int num[200], inum[100]={0};
    int i, j, br;
	br=1;

    do{
        scanf("%d",&br);
        j=br%2;
    }while((br<2 || br>200) && j);

        for(i=0; i<br; i++)
        {
            scanf("%d",&j);
            if(j>0 && j<=100)
            {
                num[i]=j;
            }
        }

        for(i=0; i<br; i++)
        {
            inum[num[i]]++;
        }
        j=0;
        while(j<100 && inum[j]!=1)
        {
            j++;
        }
        i=0;
        while(i<200 && num[i]!=j)
        {
            i++;
        };
        printf("\n%d",num[i]);
	return 0;
}
