#include <stdio.h>

int main(){
	int n, check, rudolf, i, j;
	int arr[200];
	do{
		scanf("%d", &n);
	}while(n <= 0 || n >= 200 || n % 2 == 0);
	for(i = 0; i < n; i++){
		do{
			check = 0;
			scanf("%d", &arr[i]);
			for(j = 0; j < i; j++){
				if(arr[i] == arr[j])
					check++;
			}
		}while(arr[i] <= 0 || arr[i] > 100 || check > 2);
	}
	for(i = 0; i < n; i++){
		for(j = i; j < n;){
			j++;
			if((arr[i] == arr[j]) && (arr[j] != 0)){
				arr[i] = 0;
				arr[j] = 0;
			}
			else if(arr[i] != 0)
					rudolf = arr[i];
		}
	}
	printf("%d",rudolf);
	return 0;
}
