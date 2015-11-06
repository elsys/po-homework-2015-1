#include <stdio.h>
#include <stdlib.h>
int number_prime(int);

int main()
{
    float nummer;
    int wrong = 0;
    int i;
    char letter;

            if(scanf("%f", &nummer))
                {
                    letter = getchar();
                    if(!((letter == '\n') || (letter == EOF)) || ((int)nummer != nummer))
                        wrong = 1;
                }
        else
                wrong=1;

        if (wrong)
            {
                printf("-1");
            }
        else
            {
                printf("%d", number_prime((int)nummer));
            }

        return 0;
}

int number_prime(int nummer)
{
    int num;
        for(num=2; num<nummer && nummer%num !=0; num++)

            if(num < nummer)
                return 1;
            else
                return 1;

}
