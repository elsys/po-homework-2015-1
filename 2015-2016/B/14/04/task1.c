#include <stdio.h>
#include <stdio.h>
int is_prime ()
{
int number,counter=2;

printf("Number:");scanf("%d", &number);
if(number<=1){
        printf(" -1");}
    else{
    do {
        counter++;
    } while(number%counter!=0);

    if(counter==number) printf("1");

    else printf("0");
    }
    return 0;
}
int main()
{

        is_prime();

return 0;
}
