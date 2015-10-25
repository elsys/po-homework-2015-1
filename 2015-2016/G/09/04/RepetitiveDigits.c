#include<stdio.h>


int main() {
	int num;
	int i;
	int a[10];
    printf("Molq vavedete chislo\n");
    scanf("%d", &num);
	int c;
	for(i=0;i<=9;i++){
		a[i]=0;
	}
	for(i=0;i<=9;i++){
		while(num !=0){
			c=num % 10;
			a[c]=a[c]+1;
			num=num/10;
		}
}
	for(i=0;i<=9;i++){
		printf("Chisloto %d se sreshta %d\n",i,a[i]);

}



}
