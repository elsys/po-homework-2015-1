#include <stdio.h>
#include <stdlib.h>
/*Velislav Yotov 10a Nomer5
Funtion rotr
Vuvejdat se 3 chisla i se zavurtat(nadqsno)*/
void rotr(int *a, int *b, int *c)
{
    int s,y;
    s = *a;
    y = *b;
    *a = *c;
    *b = s;
    *c = y;
}

int main()
{
    int  spins,i,l,m,*ptr,*ptr2,*ptr3;
    printf("Vuvedi chislo\n");
    scanf("%d",&i);

    printf("Vuvedi chislo\n");
    scanf("%d",&l);

    printf("Vuvedi chislo\n");
    scanf("%d",&m);

    printf("Times to spin");
    scanf("%d",&spins);

    ptr=&i;
    ptr2=&l;
    ptr3=&m;

    while(1 <= spins)
        {
            rotr(ptr,ptr2,ptr3);
            spins--;
        }
    printf("1=%x\n2=%d\n3=%d",*ptr,*ptr2,*ptr3);
    return 0;
}
