#include <stdio.h>
#include <string.h>

int main(){
int repeat[10];
int n,i,a,b,c;
scanf("%d",&n);
	c = n;
	for(i=0;c!=0;i++){
	c=c/10;
	
	}
	while(i>9){
	printf("Not valid int \n");
	scanf("%d",&n);
	c = n;
	for(i=0;c!=0;i++){
	c=c/10;
	
	}

	}

	for(i=0;n!=0;i++){
	a = n%10;
	repeat[i] = a;
	n=n/10;
	
	}
	n = i;

	for(b=0;b<n;b++){

			for(a=n-1;a>b;a--){

			if(repeat[b-1]>repeat[b]){
				c = repeat[b-1];
				repeat[b-1] = repeat[b];
				repeat[b] = c;

			}
			
			

			}
		



		}

	for(b=0;b<n;b++){

			for(a=b+1;a<n;a++){

			if(repeat[b]==repeat[a]){printf("%d \n ",repeat[b]);break;}
			
			

			}
		
			b = a - 1;


		}




return 0;

}


