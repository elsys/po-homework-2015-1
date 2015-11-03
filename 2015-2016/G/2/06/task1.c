#include <stdio.h>

int is-prime();
int main(){
int n,i
int a=1;

	if(scanf("%d", &n) != 1)
{
	a=0;
	}

	if(a){

	printf("%d \n", is_prime(n));

	}else
	{
	printf("%d \n", -1);
	}

return 0;

}

int is_prime(int n){
	do{
    i=2;
    scanf("%d",i!=n);
    i++;
	if(n%i == 0){
	return 0;
	}
	}
return 1;
}
