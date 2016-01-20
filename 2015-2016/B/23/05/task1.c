#include <stdio.h>

int numbers[6];

void rotr(int a, int b, int c)
{
    numbers[4] = numbers[3];
    numbers[5] = numbers[1];
    numbers[6] = numbers[2];
    numbers[1] = numbers[4];
    numbers[2] = numbers[5];
    numbers[3] = numbers[6];
}

int main()
{
    int rotations;
    printf("Number 1:\n");
    scanf("%d",&numbers[1]);
    printf("Number 2:\n");
    scanf("%d",&numbers[2]);
    printf("Number 3:\n");
    scanf("%d",&numbers[3]);
    printf("Number of rotations:\n");
    scanf("%d",&rotations);
    while(rotations >= 1)
    {
        rotations--;
        rotr(numbers[1],numbers[2],numbers[3]);
    }
    if(rotations == 0) printf("%d %d %d",numbers[1],numbers[2],numbers[3]);
    else printf("%d %d %d",numbers[4],numbers[5],numbers[6]);
    return 0;
}
