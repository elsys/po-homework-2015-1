#include <stdio.h>

int is_prime(int number);

int main(){

	int number, is_int;
    is_int = scanf("%d", &number);

	if(is_int!=1){
        printf("%d \n", -1);
     }else{
        printf("%d \n", is_prime(number));

	   }
	return 0;
}
int is_prime(int number){

	int mod=2;
    while(mod > 1 && mod < number)
        if(number%mod == 0){
			return 0;
        }else{
            return 1;
           }
        mod++;
}
