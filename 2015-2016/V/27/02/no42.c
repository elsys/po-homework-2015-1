#include<stdio.h>
int main()
{
	int a[1000];
	int i=0,j,p,n,m;
	do{
	printf("\n Insert Number: ");
	scanf("%d", &a[i]);
	if(a[i]==42)
		break;
	i++;
	}while(i<=1000);
	for(j=0; j<i; j++){
		for(p=0; p<i; p++){
			if(a[j]<a[p]){
				n=a[j];
				a[j]=a[p];
				a[p]=n;
			}
		}
	}
	for(m=0; m<i; m++){
	printf("\n %d \n",a[m]);
	}
	return 0;
}
