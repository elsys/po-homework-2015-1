#include <stdio.h>

int main()
{
	int n, eleni[200], stado[100], i, r = 0;
	do{
		scanf("%d", &n);
	}while(n%2 == 0 || n > 200);
	for(i = 0; i < 100; i++){
        stado[i] = 0;
	}
	for(i = 0; i < n; i++){
		do{
			scanf("%d", &eleni[i]);
		}while(eleni[i] < 1 || eleni[i] > 100 || stado[eleni[i]] > 1);
		stado[eleni[i]]++;
	}
	for(i = 0; i < 100; i++){
		if(stado[i] == 1)
			if(r == 0)
				r = i;
	}
	for(i = 0; i < n; i++){
		if(eleni[i] == r){
			printf("%d", i);
			return 0;
		}
	}
	return -1;
}
