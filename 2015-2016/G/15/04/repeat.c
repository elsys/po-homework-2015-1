#include <stdio.h>
#include <string.h>

int main(){
int repeat[50];
int n,i,a,b;
scanf("%d",&n);

	for(i=0;n!=0;i++){
	repeat[i]=n%10;
	n=n/10;




	}
		for(b=0;b<i;b++){

			for(a=b+1;a<i;a++){

			if(repeat[b]==repeat[a])
			
			printf("%d \n ",repeat[b]);

			}
		



		}




return 0;

}


