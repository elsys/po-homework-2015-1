#include <stdio.h>
void Oburni();
int main()
{
    printf("Vuvedete Izrechenie/Duma: ");
    Oburni();
    return 0;
}
void Oburni()
{
    char c;
    scanf("%c",&c);
    if( c != '\n')
    {
        Oburni();
        printf("%c",c);
    }
}
