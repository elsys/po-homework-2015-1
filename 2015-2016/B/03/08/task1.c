#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void d_to_h( char *, int);
void h_to_d( char *);
int transform ( char );
char transform_h ( int );

int main() {
    char type, hex[8], rgb[20];
    int lenght;
    type = getchar();
    getchar();
    if( type == 'd' ) {
        fgets(rgb, 20, stdin);
        lenght = (unsigned)strlen(rgb);
        d_to_h( rgb, lenght );
    }
    else if ( type == 'h') {
        fgets(hex, 8, stdin);
        h_to_d ( hex );
    } else {
        printf(" Type d or h, nothing else! ");
    }
    return 0;
}

void d_to_h ( char * number, int lenght ) {
    int count, total, current, written;
    char r[2], g[2], b[2];
    for ( count = 0, total = 0, written = 0; count < lenght ; count++ ){
        if( number[ count ] >= '0' && number [ count ] <= '9' ) {
            total = total * 10 + transform( number[ count ]);
        } else {
            if ( number[ count ] != ' ') {
                current = total % 16;
                total = total / 16;
                if( written == 0 ) {
                    r[0] = transform_h( total );
                    r[1] = transform_h( current );
                    written ++;
                }
                else if( written == 1 ) {
                    g[0] = transform_h( total );
                    g[1] = transform_h( current );
                    written ++;
                }
                 else if( written == 2 ) {
                    b[0] = transform_h( total );
                    b[1] = transform_h( current );
                    written ++;
                }
                total = 0;
            }
        }
    }
    printf("#%c%c%c%c%c%c", r[0], r[1], g[0], g[1], b[0], b[1]);
}

void h_to_d ( char * hex ) {
    int count, total = 0, r, g, b;
    for ( count = 1; count < 7; count ++ ) {
        if( count % 2 == 1 ) {
            total = transform( hex[ count ] ) * 16;
        } else {
            total = total + transform ( hex [ count] );
            if( count == 2 ) r = total;
            if( count == 4 ) g = total;
            if( count == 6 ) b = total;
        }
    }
    printf("rgb(%d, %d, %d)", r, g, b);
}

int transform( char letter ) {
    switch ( letter ) {
        case '0' : return 0; break;
        case '1' : return 1; break;
        case '2' : return 2; break;
        case '3' : return 3; break;
        case '4' : return 4; break;
        case '5' : return 5; break;
        case '6' : return 6; break;
        case '7' : return 7; break;
        case '8' : return 8; break;
        case '9' : return 9; break;
        case 'a' : return 10; break;
        case 'b' : return 11; break;
        case 'c' : return 12; break;
        case 'd' : return 13; break;
        case 'e' : return 14; break;
        case 'f' : return 15; break;
        default : return -1; break;
    }
}

char transform_h( int letter ) {
    switch ( letter ) {
        case 0 : return '0'; break;
        case 1 : return '1'; break;
        case 2 : return '2'; break;
        case 3 : return '3'; break;
        case 4 : return '4'; break;
        case 5 : return '5'; break;
        case 6 : return '6'; break;
        case 7 : return '7'; break;
        case 8 : return '8'; break;
        case 9 : return '9'; break;
        case 10 : return 'a'; break;
        case 11 : return 'b'; break;
        case 12 : return 'c'; break;
        case 13 : return 'd'; break;
        case 14 : return 'e'; break;
        case 15 : return 'f'; break;
        default: return 0; break;
    }
}
