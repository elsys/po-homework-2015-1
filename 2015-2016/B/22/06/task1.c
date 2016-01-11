#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hex_to_rgb( char * );
void rgb_to_hex( char * );
int hex_to_rgb_help( char );
char rgb_to_hex_help( int );


int main() {
	char horb, hex[30], rgb[30];
	scanf("%c", &horb);
	getchar();
	
	if (horb == 'h'){
		fgets( hex , 30 , stdin );
		hex_to_rgb( hex );
	}

	if ( horb == 'd'){
	 	fgets( rgb , 30 , stdin );
		rgb_to_hex( rgb );
	} 

	return 0;
}

void hex_to_rgb(char *hex){

	int swot, number1, number2, r, b, g, counter;

	for(counter = 0 ; counter <= 7 ; counter ++){
	
		if(counter % 2 != 0){
			swot = hex_to_rgb_help( hex[counter] );
			number1 = swot * 16;  
		
		}
		if(counter % 2 == 0){
			swot = hex_to_rgb_help( hex[counter] );
			number2 = swot;
	
		}
			if (counter == 2){
				r = number1 + number2;
			}
			if (counter == 4){
				g = number1 + number2;
			}
			if (counter == 6){
				b = number1 + number2;
			}
	} 

 printf("rgb(%d,%d,%d)", r,g,b);
 printf("\n");
}

void rgb_to_hex(char *rgb){
	int best = 0, rgb_helper = 0, coun = 0, rgb_num, rgb_num1;
	printf("#");
	
 	for ( rgb_helper = 0 ; rgb_helper < strlen(rgb) ; best = 0 ){
		for ( ; rgb[coun] != ',' ; coun ++ , rgb_helper ++){
			
			if(rgb[coun] != ' '){
				best = best * 10 + rgb[coun] - '0';

			}
			if (rgb[ coun + 1] == '\n'){
				rgb_helper = rgb_helper + 100 ;
				break;
	
			}
		}
	rgb_num = best / 16;
	rgb_num1 = best % 16;
	printf("%c", rgb_to_hex_help(rgb_num) )	;
	printf("%c", rgb_to_hex_help(rgb_num1) ) ;	
	coun ++; 
	rgb_helper ++;
	}	
				
printf("\n");		

}

int hex_to_rgb_help( char num ){
	switch( num ){
	case '0': return 0 ; break;
	case '1': return 1 ; break;
	case '2': return 2 ; break;
	case '3': return 3 ; break;
	case '4': return 4 ; break;
	case '5': return 5 ; break;
	case '6': return 6 ; break;
	case '7': return 7 ; break;
	case '8': return 8 ; break;
	case '9': return 9 ; break;
	case 'a': return 10; break;
	case 'b': return 11; break;
	case 'c': return 12; break;
	case 'd': return 13; break;
	case 'e': return 14; break;
	case 'f': return 15; break;

	default : return 0 ; break;
	
	}

}

char rgb_to_hex_help(int num){
	switch(num){
	case 0 : return '0' ; break;
	case 1 : return '1' ; break;
	case 2 : return '2' ; break;
	case 3 : return '3' ; break;
	case 4 : return '4' ; break;
	case 5 : return '5' ; break;
	case 6 : return '6' ; break;
	case 7 : return '7' ; break;
	case 8 : return '8' ; break;
	case 9 : return '9' ; break;
	case 10: return 'a' ; break;
	case 11: return 'b' ; break;
	case 12: return 'c' ; break;
	case 13: return 'd' ; break;
	case 14: return 'e' ; break;
	case 15: return 'f' ; break;

	default : return 0; break;
	}
}
