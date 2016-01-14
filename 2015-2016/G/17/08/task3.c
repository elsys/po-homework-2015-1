

#include <stdio.h>

int main()
{

    int deer[200];
    int i, j, pair, deers;

    do
    {

        scanf("%d", &deers);

    }
    while(deers%2 == 0 || deers>200 );

    for(i = 0; i < deers; i++)
    {

        scanf("%d", &deer[i]);

        for(j = 0, pair = 1; j < i; j++)
        {

            if(deer[i] == deer[j])
            {

                pair++;

            }

            if(pair>2)
            {

               return 0;

            }

        }

    }

    for(i = 0; i < deers; i++)
    {

        for(j = 0, pair = 0; j < deers; j++)
        {

            if(deer[i] == deer[j])
            {

                pair++;

            }

        }

        if(pair == 1)
        {

            printf("%d \n", deer[i]);
            break;

        }

    }

    return 0;

}


