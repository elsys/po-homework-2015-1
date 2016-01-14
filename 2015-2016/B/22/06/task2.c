#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calculator(char *);

int main() {
	int helper, total = 0;
	char sentence[30];
	
	fgets( sentence , 30 , stdin);
	
		for (helper = 0 ; helper <= strlen(sentence) ; helper ++){
	
			total = total + calculator ( &sentence[helper] );
	
		}

	printf("%d \n", total);
	return 0 ;
}

int calculator( char *letter ){
	switch (*letter){
	case 'a' : return 1 ; break ;
	case 'b' : return 2 ; break ;
	case 'c' : return 3 ; break ;
	case 'd' : return 1 ; break ;
	case 'e' : return 2 ; break ;
	case 'f' : return 3 ; break ;
	case 'g' : return 1 ; break ;
	case 'h' : return 2 ; break ;
	case 'i' : return 3 ; break ;
	case 'j' : return 1 ; break ;
	case 'k' : return 2 ; break ;
	case 'l' : return 3 ; break ;
	case 'm' : return 1 ; break ;
	case 'n' : return 2 ; break ;
	case 'o' : return 3 ; break ;
	case 'p' : return 1 ; break ;
	case 'q' : return 2 ; break ;
	case 'r' : return 3 ; break ;
	case 's' : return 4 ; break ;
	case 't' : return 1 ; break ;
	case 'u' : return 2 ; break ;
	case 'v' : return 3 ; break ;
	case 'w' : return 1 ; break ;
	case 'x' : return 2 ; break ;
	case 'y' : return 3 ; break ;
	case 'z' : return 4 ; break ;
	case ' ' : return 1 ; break ;
	default : return 0 ; break ; 

	}
}
