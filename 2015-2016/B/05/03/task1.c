#include <stdio.h>
int main(){
int x,i,n=1;
printf("\nHeight Of The Triangle: ");
scanf("%d",&x);
while(x>0)
	{
	    printf("\n");
		for(i=1;i<x;i++){
            printf(" ");
        }
		for(i=0;i<n;i++){
			printf("X");
        }
		for(i=1;i<x;i++){
			printf(" ");
		}
		n=n+2;
		x--;
	}
return 0;
}
