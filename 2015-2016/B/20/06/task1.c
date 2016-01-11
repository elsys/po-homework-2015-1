#include <stdio.h>
#include<stdlib.h>
int main(){
	char a[100];
	
 int decimal1,decimal2,decimal3;
 int num1,num2,num3;
	scanf("%s",a);
	
	if(a[0] == 'h'){
		scanf("%x %x %x",&decimal1,&decimal2,&decimal3);
		printf("rgb(%d, %d, %d)",decimal1,decimal2,decimal3);
	}
	if(a[0] == 'd'){
	        scanf(" %d %d %d",&num1,&num2,&num3);

		printf("#%X",num1);
		printf("%X",num2);
		printf("%X",num3);
	}
	
	return 0;
}
