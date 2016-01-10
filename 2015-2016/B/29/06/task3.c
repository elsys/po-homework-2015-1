#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){
	int many,index,index2;
	int deers[200];
	scanf("%d",&many);
	for (index = 0 ; index < many ; index++){
		scanf("%d",&deers[index]);
	}
	for (index = 0 ; index < many ; index++){
		for (index2 = 0 ; index2 < many ; index2++){
			if (deers[index2] != 0 && deers[index] != 0){
				if (index != index2){
					if (deers[index] == deers[index2]){
					deers[index]=0;
					deers[index2]=0;break;
					}
				}
			}
		}
	}
	for (index = 0 ; index < many ; index++){
		if (deers[index]!=0)printf("%d",deers[index]);
	}
}
