/*Programa za vuvejdane na masiv ot celi chisla (42-sentinel) i sortiraneto mu vuzhodqshto*/

#include <stdio.h>

#define MAXNNUM 1000

int main(){
	int num[MAXNNUM], temp, i=0;
	for (i=0; i<MAXNNUM; i++){
		scanf("%d", &temp);
		if(temp == 42)
			break;
		num[i] = temp;
	}

	int l = i, j;
	for (i=0; i<l-1; i++)
		for (j=0; j<l-1-i; j++)
			if (num[j] > num[j+1]){
			temp = num[j];
			num[j] = num[j+1];
			num[j+1] = temp;
			}

	printf("\n\n");
	for(i=0; i<l; i++)
		printf("%d\n", num[i]);
	return 0;
}
