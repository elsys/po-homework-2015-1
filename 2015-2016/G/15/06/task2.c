#include <stdio.h>

int exact_square();
int main(){
int n;
scanf("%d", &n);

printf("%d \n", exact_square(n));




return 0;
}
int exact_square(int n){
int i;
	for(i=1;i != n;i++){
	if(n == i*i){
	return 1;
	}

	} 
return 0;

}
