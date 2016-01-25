#include <stdio.h>

 int main(){

 	int a, b, temp;

 	scanf("%d", &a);
 	if(a < 0 && b > 7)
        return 1;

    scanf("%d", &b);
 	if(a < 0 && b > 200)
        return 1;

    temp= (b >> a) & 1;

 	printf("%d", temp);

 	return 0;
 }
