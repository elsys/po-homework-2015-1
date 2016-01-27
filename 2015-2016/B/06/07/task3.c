#include <stdio.h>

int main()
{
    int num, i=0, extra, counter= 0,counter2 = 0;
    char b[15];
	scanf("%d", &num);
	while(i == 0)
	{
        extra = num;
        while (extra > 0)
		{
            b[counter] = extra % 16;
            extra = extra / 16;
            counter ++;
        }
        while (counter2 <= counter-1)
		{
            if (b[counter2] == b[counter-1])
			{
                counter2++;
                counter--;
                if (counter2 >= counter-1) i = 1;
			}
            else break;
        }
	counter = 0;
	counter2 = 0;
	if (i == 0) num++;
    }
     printf("%X",num);
 return 0;
}