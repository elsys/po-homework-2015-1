#include <stdlib.h>
#include<stdio.h>
int main()
{
    int hexvalue;
    int Rhex;
    int Ghex;
    int Bhex;
    int score;
    char* holder;
    char ch;
    int r, g ,b;
    int counter;
    scanf("%c", &ch);
    if(ch=='h'){
    scanf("%x", &hexvalue);
    while(hexvalue>1)
    {
        printf("%d\n", hexvalue % 100);
        hexvalue /= 100;
    }
 }
    if(ch=='d') /*(ch == 'd')*/{
  scanf("%d,%d,%d", &r, &g, &b);
  printf("#%x%x%x\n", r, g, b);
    }

    return 0;
}
