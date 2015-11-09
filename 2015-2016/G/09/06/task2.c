#include <stdio.h>
#include <math.h>

int exact_square(int a){
    float IS_square;

    IS_square = sqrt(a);
    if (IS_square-(int)IS_square == 0){return 1;}
    else {return 0;}

}

int main()
{
    int a;
    scanf("%d", &a);

    if(exact_square(a) == 1){printf("1");}
    if(exact_square(a) == 0){printf("0");}

   return 0;
}
