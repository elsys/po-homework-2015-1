#include <stdio.h>
void next_generation(int*, int*, int);

int main()
{
    int n, i;
    int hasLife = 1;
    int current[20];
    int next[20];
    int loops;

    scanf("%d", &n);


    for(i = 0; i < n; i++)
    {
        scanf("%d", &current[i]);
    }

    do{
        hasLife = 0;
        for(i = 0; i < n; i++)
        {
            if(current[i] == 1)
            {
                hasLife = 1;
                break;
            }
        }

        for(i = 0; i < n; i++)
            {
                if(current[i] == 1)
                {
                    printf("*");
                }
                else
                {
                    printf(".");
                }
            }

        printf("\n");
        next_generation(current, next, n);

        for(i = 0; i < n; i++)
        {
            current[i] = next[i];
        }
        loops++;
    }while(hasLife == 1 && loops < 1000);

    return 0;
}

void next_generation(int *current, int *next, int length)
{
    int i;
    next[0] = current[0];
    next[length - 1] = current[length - 1];
    for(i = 1; i < length - 1; i++)
    {
        if((current[i-1] == 1 && current[i + 1] == 1)||
           (current[i-1] == 0 && current[i + 1] == 0))
        {
            next[i] = 0;
        }
        else
        {
             next[i] = 1;
        }
    }

}
