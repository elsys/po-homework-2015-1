#include <stdio.h>
			//mislq che ima neshto neredno v uslovieto na zadachata, tui kato rudolph trqbva da e vinagi sam vuv negovata staq
			//a puk max elenite sa 200 i max staite sa 100
			//v uslovieto su6to e zadadeno 4e vseki normalen elen ne moje da e sam(ina4e 6te se pravi na vtori rudolph)
			//sledovatelno ne bi li trqbvalo max elenite da sa 199 i zaedno s tova broq na elenite vinagi da e nechetno chislo?

int findRudolph(int reindeer[200], int amountOfReindeer);

int main(){
	int i, amountOfReindeer, reindeer[200];
	
	do{
		scanf("%d", &amountOfReindeer);
	}while(amountOfReindeer%2!=0 && !(amountOfReindeer>0 && amountOfReindeer<200));
	
	for(i=0; i<amountOfReindeer; i++){
		do{
			scanf("%d", &reindeer[i]);
		}while(reindeer[i]>100 || reindeer[i]<0);
	}
	
	printf("%d", findRudolph(reindeer, amountOfReindeer));
	
}

int findRudolph(int reindeer[200], int amountOfReindeer){
	int i, rooms[101]={0};
	
	for(i=0; i<amountOfReindeer; i++){
		rooms[reindeer[i]]++;
	}
	
	for(i=0; i<amountOfReindeer; i++){
		if(rooms[reindeer[i]]==1){
			return reindeer[i];
		}
	}
	return 0;
}
