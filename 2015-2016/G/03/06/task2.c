 #include <stdio.h>
#include <math.h>
int exact_square(int answer );

int main(){

int result;

printf("%d",exact_square(result));
}
int exact_square(int answer)
{
    int num;

    float helper;
    scanf("%d",&num);
    helper = sqrt(num);
    if(num/helper == helper)
    {
        answer=1;
    }
    else
        answer=0;
    return answer;
}

