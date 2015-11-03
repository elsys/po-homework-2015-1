#include <stdio.h>

int main(){
	int a,i = 0,k = 0,p = 0,z = 0;
	int num[10000];
	scanf("%d",&a);
	while(a > 1){
		num[i] = a % 10;
		i++;
		a/=10;
	}
	while(p < 10){
		z = 0;
		k = 0;
		while(k < i){
			if(num[k] == p)
				z++;
			k++;
		}
		if (z != 0)
			printf("The figure %d is %d times in the number. \n",p,z);
		p++;
	}
	return 0;
}
