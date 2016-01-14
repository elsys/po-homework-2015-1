#include <stdio.h>

int main()
{
    int elk_arr[200];
    int counter,counter2;
    int how_many;
    int elk_number;
    int temp,is_rudolf = 1;

    for(counter = 0; counter <= 199; counter++)
    {
        elk_arr[counter] = 0;
    }

    scanf("%d",&how_many);

    if (how_many % 2 == 0 || how_many > 200)
    {
        return -1;
    }

    for(counter = 0; counter <= how_many - 1; counter ++)
    {
        scanf("%d" ,&elk_number);
        if(elk_number < 1 || elk_number > 100)
        {
            return -1;
        }
        else
        {
            elk_arr[counter] = elk_number;
        }
    }

    for(counter = 0; counter < how_many; counter ++)
    {
       temp = elk_arr[counter];

       for(counter2 = 0; counter2 < how_many; counter2++)
       {
            if(temp == elk_arr[counter2] && counter != counter2)
            {
                is_rudolf = 0;
                break;
            }
       }
       if(is_rudolf != 0)
       {
           printf("%d", temp);
           break;
       }
       else
        {
            is_rudolf = 1;
        }
    }
    return 0;
}
