 #include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int hp;
    int helper;
    int i=0;
    int base[200];
    int box;
    do{
            scanf("%d",&helper);
    }while(helper<0||helper>7);
    do{

    scanf("%d",&box);
    }while(helper<0||helper>200);
    while(box !=0)
    {
        base[i] = box%2;
        box = box/2;
        i++;
    }
  hp = i;
  while(hp<=8)
  {
      base[hp] = 0;
      hp++;
  }
i=0;
    while(i!=helper)
    {
        i++;
    }
printf("\n%d",base[i]);

    return 0;
}

