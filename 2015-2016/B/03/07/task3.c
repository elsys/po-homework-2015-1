#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_palindrom( char * );
char dec_to_hex ( int );
void get_hex( int, char* );

int main() {
    int number, i;
    char hex[10];
    for( i = 0; i < 10; i++ ) hex[ i ] = 0;
    scanf("%d", &number);
    get_hex(number, hex);
    while(1) {
        get_hex( number, hex );
        if( check_palindrom( hex ) )  {
            for ( i = 0; i < strlen(hex); i++ ) printf("%c", hex[i]);
            break;
        }
        else {
            number++;
            get_hex( number, hex );
        }
    }
    return 0;
}

void get_hex( int number, char * hex ) {
    int reminder, get_reminder, current, put;
    char hex_container[10];
    for ( current = 0; number > 0; current ++ ) {
        reminder = number % 16;
        number = number / 16;
        hex_container[ current ] = dec_to_hex( reminder );
        if( number < 16 ) {
            for ( get_reminder = current, put = 0; get_reminder >= 0 ; get_reminder --, put++ ) {
                if( put == 0 ) {
                    hex[ put ] = dec_to_hex( number );
                    get_reminder++;
                }
                else hex [ put ] = hex_container [ get_reminder ];
            }
        }
    }
    if( hex [ 0 ] == '0' ) {
        for ( current = 0 ; current < strlen(hex)-1;  current ++ ) {
            hex[current] = hex[current+1];
        }
        hex[ strlen(hex)-1] = 0;
    }
}

char dec_to_hex ( int dec ){
	if( dec < 10 ) return 48+dec;
	else return 55+dec;
}

int check_palindrom ( char * hex ) {
    int size, current;
    size = strlen( hex );
    if ( size > 1 ) {
        for ( current = 0 ; current < size / 2; current ++ ) {
            if( hex [ current ] != hex [ size - current - 1 ] ) return 0;
        }
    }
    return 1;
}
