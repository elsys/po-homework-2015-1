#include <stdio.h>

int main(){
	int a[10]={0},i,n,p;
	printf("Enter n:");
	scanf("%d",&n);
	if(n<0){
		n=n*(-1);	
	}
		
	while(n>0){
		int p=n%10;
		a[p]++;//Samata chast ot masiwa stawa promenliwa
		n=n/10;
	}
        int r=0;
	for(i=0;i<10;i++){
		if(a[i]>1){
			printf("Digit %d repeats\n",i);//Всяко а[i] е променлива и принтираме стойността й;
			r=1;
		}
	}
	if(!r){
 		printf("No repeating digits");
	}
}
