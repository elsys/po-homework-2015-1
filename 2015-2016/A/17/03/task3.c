#include <stdio.h>
#include <string.h>

int main()
{
    char x[20];
    int n,y=0; int arabic=0;
    scanf("%s", x);

    n=strlen(x)-1;
    for(;x[n]=='I' && y<3;n--)
    {
        arabic++;
        y++;}
    if(x[n]=='V')
    {
        arabic+=5;
        n--;}
    if(x[n]=='I')
    {
        arabic--;
        n--;}
    y=0;
    while(x[n]=='X' && y<3)
    {
        y++;
        arabic+=10;
        n--;


        if(x[n]=='I')
            {
                arabic--;
                n--;}
    }

    if(x[n]=='L')
    {
        arabic+=50;
        n--;}

    if(x[n]=='X')
            {
                arabic-=10;
                n--;}
            y=0;


    for(;x[n]=='C' && y<3;n--)
    {
            y++;
            arabic+=100;

        if(x[n]=='X')
           {
                arabic=arabic-10;
                n--;}
    }

    if(arabic>256)
    {
        printf("\nToo large");}
    else
    {

        printf("%d",arabic);}
   return 0;

}
