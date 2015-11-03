#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[4], y[4], z[4], h[4], i =0;

    printf ("Enter matrix:\n");

    for (i; i<4; i++) {

        scanf ("%d", &x[i]);

    }
    i=0;

    for (i; i<4; i++) {

        scanf ("%d", &y[i]);

    }
    i=0;

    for (i; i<4; i++) {

        scanf ("%d", &z[i]);

    }
    i=0;

    for (i; i<4; i++) {

        scanf ("%d", &h[i]);

    }
    i=0;

    printf ("\n");

    for (i; i<4; i++) {

        printf ("%d ", x[i]);
        printf ("%d ", y[i]);
        printf ("%d ", z[i]);
        printf ("%d \n", h[i]);

    }



    return 0;
}
