#include <stdio.h>
void next_generation(int *current, int *next, int length);
int check = 1;

int main()
{
    int i, n;
    do
    {
        scanf("%d",&n);
    }while(n<0 || n>20);
    #define LEN n
    int A[LEN], B[LEN];
    for(i=0;i<n;i++) scanf("%d",&A[i]);
    for(i=0;i<n;i++) printf("%c",(A[i]) ? '*' : '.');

    for(i=0;i<1000;i++)
    {
        printf("\n");
        if(i%2)
        {
            next_generation(B, A, n);
            if(check == 0) break;
        }
        else
        {
            next_generation(A, B, n);
            if(check == 0) break;
        }
    }
    return 0;
}

void next_generation (int *current, int *next, int length)
{
    int i;
    check = 0;
    for(i=0;i<length;i++)
    {
        if( ( i != 0 && i < length && ( current[i-1] == 1 || current[i+1] == 1 ) ) && current[i-1] != current[i+1] ) next[i] = 1;
        else next[i] = 0;
        next[length-1] = 0;
        check += next[i];
    }
    for(i=0;i<length;i++) printf("%c",(next[i]) ? '*' : '.');
}
