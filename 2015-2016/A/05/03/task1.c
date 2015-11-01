//Ot vhoda se vuvejda chislo n.Trqbva da se izvede triugulnik s visochina n i osnova 2n-1
//Velislav Yotov 10a Nomer-5
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,h,z;
    char simvol;
    printf("Vuvedi vid simvol\n");
    scanf("%c",&simvol);
    printf("Vuvedi broi redove\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        h=n-i;
        for(z=0;z<n*2;z++)
        {
            if(z>=h && n*2-1-z>h)
                {printf("%c",simvol);}
            else
                printf(" ");
        }
        printf("\n");
    }
}
