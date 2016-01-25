#include <stdio.h>

int main()
 {
    int a, b, c = 0, i = 0;
    scanf("%d",&a);
    while(i < 10) 
    {
        b = a;
        c = 0;
        while(b > 0)
         {
            if(i == b%10)
                c++;
            b /= 10;
        }
        if(c >= 2) 
        {
            printf("%d:%d\n",i ,c);
        }
        i++;
    }
    return 0;
}
