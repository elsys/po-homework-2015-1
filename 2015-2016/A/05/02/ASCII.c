#include <stdio.h>
#include <stdlib.h>
//Izkarva ASCII tablicata i sreshtu suotvetniqt znak pokazva koda mu
int main()
{
    char x='\0';
    int i=0;
    while(i<255)
    {
        printf("%c => %d\n",x,i);
        x++;
        i++;
    }

}
