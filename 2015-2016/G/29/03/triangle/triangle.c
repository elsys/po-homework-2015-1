int main()
{
    int height;
    scanf("%d", & height);

    int counter1 = 1;
    int counter2 = 1;
    int counter3 = 0;

    while(height > 0)
    {

        while(counter2 <= height-1)
        {
           printf(" ");
           counter2++;
        }
        counter2 = 1;

        while(counter3!=((2*counter1)-1))
        {
           printf("*");
           counter3++;
        }
        printf("\n");

        counter1++;
        counter3 = 0;
        height--;

    }

}
