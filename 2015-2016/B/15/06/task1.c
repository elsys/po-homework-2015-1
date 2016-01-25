#include <stdio.h>
#include <stdlib.h>

int main()
{
char s,c;
unsigned int hex1 , hex2 , hex3;
int dec1 , dec2 , dec3 ;
printf("\n");scanf("%s",&s);
if(s == 'h')
    {
   scanf("%02c%02x%02x%02x",&c,&hex1,&hex2,&hex3);
        printf("rgb(%d, %d, %d)",hex1,hex2,hex3);
    }
else
      {
    scanf("%d, %d, %d",&dec1,&dec2,&dec3);
    printf("#%x%x%x",dec1,dec2,dec3);
      }

return 0;
}
