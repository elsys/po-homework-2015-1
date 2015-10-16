#include <stdio.h>
#include <stdlib.h>

int main(){

	int n; // Височина
	int star=0;
	int t =1;
	int bar;
	int h = 0;

	printf("Enter n: ");
	scanf("%d",&n);

	while(n > 0){
        printf("\n");
		h = 0;

		if (t == 1) {
            star = star + 1;
            t = 0;
		}
		else {
            star = star + 2;
        }

		bar = n - 1;
		for(bar; bar > 0; bar--){
			printf(" ");

		}
		for(h; h < star; h++){
			printf("*");

		}
        n--;

	}

}
