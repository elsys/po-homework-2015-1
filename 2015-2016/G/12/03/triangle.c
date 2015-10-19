#include <stdio.h>

int main(){

int a,b,c,i,d;
printf("visochina: ");scanf("%d",&a);

b = (2*a)-1;
d = 1;

	for(a;a>0;a--){
		for(i=1;i<=(a-1);i++){
			printf(" ");
		}
			for(c=1;c<=d;c++){
				printf("*");
			}
			if(d<b)d+=2;
        printf("\n");
	}

return 0;
}
