#include <stdio.h>

int get_bit_at_position(int, int);

int main() 
{
    int number;
    int position;
    int bit_at_position;
    
    do
    {
        scanf("%d",&number);
    }while(number < 0 || number > 7);
    
    do
    {
        scanf("%d",&position);
    }while(position < 0 || position > 200);
    
    
    bit_at_position = get_bit_at_position(number, position);
    
    printf("%d",bit_at_position);
    
    return 0;
}

int get_bit_at_position(int number, int position)
{
    int bit_at_position;
    bit_at_position = number & (1 << position);
    
    return bit_at_position == 0 ? 0 : 1;
}

