#include <stdio.h>
#include <stdlib.h>


int main(void)
{
int n,i;
int num[10]={0};
printf("Vavedi chislo:");
scanf("%d",&n);
do{
    num[n%10]++;

}while((n=n/10)!=0);
for(i=0;i<10;i++){
    if(num[i]>=2){
        printf("%d",i);
		}
	}
printf("\n");
return 0;
}
