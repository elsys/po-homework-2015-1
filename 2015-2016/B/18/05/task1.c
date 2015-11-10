#include <stdio.h>

void rotr(int *a, int *b, int *c);

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int n = 0;
    int count = 0;
    
    scanf("%d %d %d %d", &a, &b, &c, &n);
    
    for(count = 0; count < n; count++)
    {
        rotr(&a, &b, &c);
    }
    
    printf("%d %d %d\n", a, b, c);
     
    return 0;   

}

void rotr(int *a, int *b, int *c)
{ 
    int help = 0;
    
    help = *a;
    *a = *c;
    *c = *b;
    *b = help;    
    
}
