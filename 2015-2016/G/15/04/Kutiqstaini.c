#include<stdio.h>

int func(int n,int square[n][n]);
int main(){
int n,i,h;
scanf("%d", &n);
int square[n][n];

	
	for(i=0;i<n;i++){
	
		for(h=0;h<n;h++){
		scanf("%d",&square[i][h]);
		}
		

	}

	if(func(n,square)){
	printf("magic \n");
}else{ printf("not magic \n");
}

return 0;

}

int func(int n,int square[n][n]){
int i,a,b,h;
a=0;
b=0;
	
	
		for(h=0;h<n;h++){
		a=a+square[0][h];
		}
		

	
		for(i=0;i<n;i++){
			for(h=0;h<n;h++){
			b=b+square[i][h];
			}if(a!=b){return 0;}else{b=0;
						}
		}	for(i=0;i<n;i++){for(h=0;h<n;h++){b=b+square[h][i];}if(a!=b){return 0;}else{b=0;}}
			for(i=0;i<n;i++){b=b+square[i][i];}if(a!=b){return 0;}else{b=0;}	
	for(i=0;i<n;i++){b=b+square[i][n-(i+1)];}if(a!=b){return 0;}else{b=0;}			
return 1;
}
