#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int dec[2],hex[2];
char system;

scanf("%c",&system);

if (system == 'h'){
   printf("#");
   scanf("%2x%2x%2x",&hex[0],&hex[1],&hex[2]);
   printf("rgb(%d,%d,%d)",hex[0],hex[1],hex[2]);

}
if (system == 'd'){
        scanf("%d,%d,%d",&dec[0],&dec[1],&dec[2]);
        printf("#");
        printf("%x%x%x",dec[0],dec[1],dec[2]);
}
return 0;
    }
