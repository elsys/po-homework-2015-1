#include <stdio.h>
#include <string.h>

#define SIZE_MAX 100000

int main()
{
	int i, j , length , swap1;
	char assign = 'a' , swap2;
	int total [26];
	char letters [ 26 ];


	char txt [ SIZE_MAX ];

	printf ( "Enter Text: " );
	fgets ( txt, SIZE_MAX, stdin );



	for ( i = 0; i < 26; i ++ ){
		letters [ i ] = assign;
		assign ++;
	}
	for ( i = 0; i < 26; i ++ ){
		total [ i ] = 0;
	}


	length = strlen ( txt );

	for ( i = 0; i < 26; i ++ ){
		for ( j = 0; j < length; j ++ ){
			if ( txt [ j ] == letters [ i ] || txt [ j ] == letters [ i ] -32 ){
				total [ i ] ++;
			}
		}
	}

	for ( i = 0; i < 26; i ++ ){
		for ( j = 0; j < 26; j ++ ){
			if ( total [ i ] > total [ j ] ){
				swap1 = total [ i ];
				total [ i ] = total [ j ];
				total [ j ] = swap1;
				
				swap2 = letters [ i ];
				letters [ i ] = letters [ j ];
				letters [ j ] = swap2;
			}
			if ( total [ i ] == total [ j ] ){
				if ( letters [ i ] < letters [ j ] ){
					swap1 = total [ i ];
					total [ i ] = total [ j ];
					total [ j ] = swap1;
				
					swap2 = letters [ i ];
					letters [ i ] = letters [ j ];
					letters [ j ] = swap2;
				}
			}
		}

	}
	for ( i = 0; i < 26; i ++ ){
		printf( "%c: %d" , letters [ i ], total [ i ] );
		printf( "\n" );
	}

	return 0;
}
