#include <stdio.h>

int main () {

	int num,r,a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
	printf("Vavedi chislo : ");scanf("%d",&num);
	while(num > 0)
	{
		r = num%10;
		if(r == 0) a++;	
		if(r == 1) b++;
		if(r == 2) c++;
		if(r == 3) d++;
		if(r == 4) e++;
		if(r == 5) f++;
		if(r == 6) g++;
		if(r == 7) h++;
		if(r == 8) i++;
		if(r == 9) j++;
		num = num/10;
	}
	if(a > 0) {printf("\nBroiat na nulite = %d",a);}
	if(b > 0) {printf("\nBroiat na edinicite = %d",b);}
	if(c > 0) {printf("\nBroiat na dvoikite = %d",c);}
	if(d > 0) {printf("\nBroiat na troikite = %d",d);}
	if(e > 0) {printf("\nBroiat na chetvorkite = %d",e);}
	if(f > 0) {printf("\nBroiat na peticite = %d",f);}
	if(g > 0) {printf("\nBroiat na shesticite = %d",g);}
	if(h > 0) {printf("\nBroiat na sedmicite = %d",h);}
	if(i > 0) {printf("\nBroiat na osmicite = %d",i);}
	if(j > 0) {printf("\nBroiat na deviatkite = %d",j);}
	
	return 0;	
}
