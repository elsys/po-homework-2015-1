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

	for(i=0;i<n;i++){
	
		printf("%d  ",repeat[i]);
	
	}

	for(b=0;b<n;b++){

		for(a=b+1;a<n;a++){

		if(repeat[b]>repeat[a]){
		
		c = repeat[b];
		repeat[b] = repeat[a];
		repeat[a] = c;

		}
			
			

		}

	}

	printf("\n");

	for(i=0;i<n;i++){
	
		printf("%d  ",repeat[i]);
	
	}

	for(b=0,c=0;b<n;b++){

			for(a=b+1;a<n;a++){

			if(repeat[b]==repeat[a]){c=1;}else{break;}
			
			

			}
		
			if(c){

			printf("\n %d \n ",repeat[b]);

			}

			b = a - 1;
			c = 0;


		}




return 0;

}


