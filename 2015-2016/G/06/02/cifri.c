#include <stdio.h>

int main() {

int n,a,b,c,d,e,f,g,h,i,j,z;
a=0; b=0; c=0; d=0; e=0; f=0; g=0; h=0; i=0; j=0; n=0; z=0;
printf("Vavedi chislo: ");
scanf("%d",&n);

while(n!=0) { 

	j=n%10;
	n=n/10;
	if(j==0) {z++;}
	if(j==1) {a++;}
	if(j==2) {b++;}
	if(j==3) {c++;}
	if(j==4) {d++;}
	if(j==5) {e++;}
	if(j==6) {f++;}
	if(j==7) {g++;}
	if(j==8) {h++;}
	if(j==9) {i++;}

}
printf("0->%d\n ",z);
printf("1->%d\n ",a);
printf("2->%d\n ",b);
printf("3->%d\n ",c);
printf("4->%d\n ",d);
printf("5->%d\n ",e);
printf("6->%d\n ",f);
printf("7->%d\n ",g);
printf("8->%d\n ",h);
printf("9->%d\n ",i);
return 0;
}
