#include <stdio.h>
 
#define TRUE 1
#define FALSE 0
 
typedef long int Bool;
 
main ()
{
    Bool vidqna_cifra[10] = {0};
    long int Cifra = 0;
    long int pokazana_cifra = 0;
    long int n = 0;
 
    printf("Vuvedete chislo: ");
    scanf("%ld", &n);
 
    while (n > 0) 
    {
        Cifra = n % 10;
        if (vidqna_cifra[Cifra])
        {
            pokazana_cifra = Cifra;
            break;
        }
        vidqna_cifra[Cifra] = TRUE;
        n /= 10;
    }
 
    if (n > 0)
        printf ("Poftarqshtata se cifri e: %ld\n\n", pokazana_cifra);
    else
        printf("Nqma poftarqshti se cifri \n\n");
 
    return 0;
 
}
