#include<stdio.h>
int main(){
	int nomer,k,rudolf;
	int mqsto[200];
	do{
		scanf("%d",&nomer);
	}while(nomer<=0||nomer>=200||nomer%2==0);
	for(int i=0;i<nomer;i++){
		do{
			k=0;
			scanf("%d",&mqsto[i]);
			for(int j=0;j<i;j++){
				if(mqsto[i]==mqsto[j]){
					k++;
				}			
			}
		}while(mqsto[i]<=0||mqsto[i]>100||k>2);
	}
	for(int i=0;i<nomer;i++){
		for(int j=i;j<nomer;){
			j++;
			if((mqsto[i]==mqsto[j])&&(mqsto[j]!=0)){
				mqsto[i]=0;
				mqsto[j]=0;
			}
			else if(mqsto[i]!=0){
					rudolf=mqsto[i];
			}

		}
	}
	printf("%d\n",rudolf);
	return 0;
}
