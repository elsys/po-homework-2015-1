#include <stdio.h>

int main(){
	int num,check,rudolf;
	int cell[200];
	// input
	do{
		scanf("%d",&num);
	}while(num <= 0 || num >= 200 || num % 2 == 0);
	for(int i = 0; i < num; i++){
		do{
			check = 0;
			scanf("%d",&cell[i]);
			for(int j = 0; j < i; j++){
				if(cell[i] == cell[j]){
					check++;
				}			
			}
		}while(cell[i] <= 0 || cell[i] > 100 || check > 2);
	}

	// check
	for(int i = 0;i < num;i++){
		for(int j = i; j < num;){
			j++;
			if((cell[i] == cell[j]) && (cell[j] != 0)){
				cell[i] = 0;
				cell[j] = 0;
			}
			else if(cell[i] != 0){
					rudolf = cell[i];
			}

		}
	}
	printf("%d\n",rudolf);
	return 0;
}