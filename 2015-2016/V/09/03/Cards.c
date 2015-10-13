#include <stdio.h>
int main()
{
	char cards[13];
	int i=0, j, temp;
	printf("Enter 13 cards in a random order, from 2 to A:(10=T) \n");
	while(i<13){
		scanf("%c",&cards[i]);
        if(cards[i] >= '2' && cards[i] <= '9') i++;
        if(cards[i] == 'T' || cards[i] == 'J' || cards[i] == 'Q' || cards[i] == 'K' || cards[i] == 'A') i++;
	}
	for(i = 0 ; i < 13 ; i++){
		switch(cards[i]){                   // Converting from letters to numeral values for sorting
		    	case 'T': cards[i]=100; break;   // Because "10" screws up the sorting
			case 'J': cards[i]=101; break;
			case 'Q': cards[i]=102; break;
			case 'K': cards[i]=103; break;
			case 'A': cards[i]=104; break;
		}
	}
		for(i = 0 ; i < 13 ; i++){              // Sorting
			for(j = 0; j < 13 ; j++){
				if(cards[i]<cards[j]){
                		temp = cards[j];
				cards[j] = cards[i];
				cards[i] = temp;
				}
			}
		}
	for(i = 0 ; i < 13 ; i++){
		switch(cards[i]){                //Converting back into letters for the print
		    	case 100: cards[i] ='T'; break;
			case 101: cards[i]='J'; break;
			case 102: cards[i]='Q'; break;
			case 103: cards[i]='K'; break;
			case 104: cards[i]='A'; break;
		}
		printf("%c",cards[i]);
	}
}
