#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,i=0,help,counter = 0,counter_2=0;
    char b[10];

    scanf("%d",&a);

    while(i == 0){
        help = a;
        for (counter=0;help > 0;counter++){
            b[counter] = help % 16;
            help = help / 16;
        }

        for (counter_2=0;counter_2 <= counter-1;){
            if (b[counter_2] == b[counter-1]) {
               counter_2++;
               counter--;
              if (counter_2 >= counter-1) i = 1;
            }
            else break;
        }
if (i == 0) a++;
    }
     printf("%X",a);

	return 0;
}
