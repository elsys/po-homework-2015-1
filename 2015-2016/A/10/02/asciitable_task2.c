#include<stdio.h>
#include<stdlib.h>
int main(){
char m;
int current=0;
	while(m=getche()){
		if(m=='S' || m=='s'){
		current=1;
		}
	else if((m=='T' || m=='t') && cureent==1){
		current=2;
		}
	else if((m=='O' || m=='o') && current=2){
		current=3;
		}
	else if((m=='P' || m=='p') && current=3){
		printf("\nStop found.");
		return;
		}
	else{
		current=0;
		}
	}
}
