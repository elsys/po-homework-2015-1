#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int n, i, temp;
    int Rudolph;
    int room[100];
 
    do
    {
        scanf("%d", &n);
    }
    while(n%2 == 0);
 
    for(i = 0; i<100; i++)
    {
        room[i] = 0;
    }
 
    for(i=0; i<n; i++)
    {
        scanf("%d", &temp);
        room[temp-1]++;
    }
 
    for(i=0; i<100; i++)
    {
        if(room[i] == 1)
        {
            Rudolph = i + 1;
            break;
        }
    }
    printf("%d", Rudolph);
}