#include<stlib.h>

#include<stdio.h>

void main(void){
int i;
char n[1000];
printf("n=");scanf("%s",&n);
i=0;
int a[n];
	for(i<0;i<=n;i++){
	printf("Vuvedi nomera na elementa a[%d]",i);
	scanf("%d",&a[i]);
	}
int y;
	for(i=0;i<n;i++){
int index_max=y;
	for(y=i+1;y<n;y++){
	if(a[index_max]<a[y]){
		index_max=y;
				}
int s=a[i];
a[i]a[i+1];
a[i+1]=s;
			}
		}
	for(i=0;i<n;i++){
	printf("\nElementa s[%d] e raven na %d",i,a[i]);
		}
}
