#include <stdio.h>

int main(){

	int i,j,n,a,digits[10];

	scanf("%d", &n);

	while(!rightInt(n)){

		scanf("%d", &n);

	}

	for(i=0;n!=0;i++){

		digits[i] = n%10;
		n/=10;

	}

	n = i;

	for(i=0;i<n;i++){

		for(j=n-1;j>i;j--){
			
			if(digits[j-1]>digits[j]){
	
				a=digits[j-1];
				digits[j-1]=digits[j];
				digits[j]=a;	
			}
		}

	}

	for(i=0,a=0;i<n;i++){

		for(j=i+1;j<n;j++){
			
			if(digits[i]==digits[j]){
				
				a=1;
				
			}else{

				break;
			
			}

		}
		
		if(a){

			printf("%d \n", digits[i]);

		}

		i = j - 1;
		a = 0;

	}

	return 0;

}

int rightInt(n){

	int i;

	for(i=0;n!=0;i++){

		n/=10;

	}

	if(i>9){

		printf("Int must not be more than 10 digits \n");
		return 0;

	}

	return 1;

}
