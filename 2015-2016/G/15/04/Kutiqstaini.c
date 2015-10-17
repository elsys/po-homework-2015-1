#include<stdio.h>

int func(int n,int square[]);
int main(){
int square[50];
int n,i;
scanf("%d", &n);


	
	for(i=0;i<n*n;i++){
	scanf("%d",&square[i]);
	


	}

	if(func(n,square)){
	printf("magic \n");
}else{ printf("not magic \n");
}

return 0;

}

int func(int n,int square[]){
int i,a,b,j;
a=0;
b=0;
	for(i=0;i<n;i++){
	a=a+square[i];
	}

		for(i=0;i<n*n;i=i+n){
			for(j=i;j<n;j++){
			b=b+square[j];
			}
		if(a!=b){
		return 0;
		}else{b=0;}
		}	
			for(i=0;i<n;i++){
				for(j=i;j<n*n;j=j+n){
				b=b+square[j];
				}
			if(a!=b){
			return 0;
			}else{b=0;}
			}

			for(j=n+1;j<n;j=j+n){
				b=b+square[j];
				}
			if(a!=b){
			return 0;
			}else{b=0;}

			for(j=n-1;j<n;j=j+2){
				b=b+square[j];
				}
			if(a!=b){
			return 0;
			}else{b=0;}
				
return 1;
}
