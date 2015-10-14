#include <stdio.h>

#define TRUE 1
#define FALSE 0

typedef int Bool;

main ()
{
    Bool digit_seen[10] = {0};
    int digit = 0;
    int display_digit = 0;
    long int n = 0;

    printf("Vuvedi chislo:");
    scanf("%ld", &n);

    while (n > 0)
    {   digit = n % 10;
        if (digit_seen[digit])
        {
            display_digit = digit;
            break;
        }
        digit_seen[digit] = TRUE;
        n /= 10;    }
        if (n > 0)
        printf ("Povtarqshtoto se chislo e: %ld\n\n", display_digit);
    else
        printf("Ne povtarqshto se chislo:\n\n");

    return 0;

}
