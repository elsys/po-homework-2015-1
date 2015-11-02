#include <stdio.h>

int main(){
	int a,a1,check=0,times;
	scanf("%d",&a);
	while(check < 10){
		a1 = a;
		times = 0;
		while(a1>1){
			if(check == a1 % 10){
				times++;
			}
			a1/=10;
		}
		if(times > 1)
			printf("%d times %d numbers\n",times,check);
		check++;
	}
}
