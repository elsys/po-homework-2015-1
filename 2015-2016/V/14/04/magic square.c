#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    printf ("Enter height:\n");
    scanf ("%d", &height);

    magic (height);

}

int magic (int h)
{
    int i = 0, j =0, lol=0, sum =0, s,
    random =0;

    printf ("Note: coordinates - \(row:number square\)\n");

    for (i; i<h; i++) {

        for (j; j<h; j++) {
            printf ("Enter number in coordinates %d:%d ", i+1, j+1);
            scanf ("%d", &lol);
            sum = sum + lol;


        }
        j=0;

        if (i==0)
            s=sum;

        if (sum == s)
            random = 1;
        else
            random = 0;

        sum = 0;

    }

    if (random == 1)
        printf ("The square is indeed magical!");
    else
        printf ("The square ain't magical at all!");

    return 0;

}
