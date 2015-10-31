#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ALPHA_NUM 26

int create_letter_distribution_program( );
int count_letters(char);
int alpha_count[ ALPHA_NUM ];
char alpha[ ALPHA_NUM ];

int main () {

    FILE *fp;
    char ch;
    int i;
    for( i = 0 ; i < ALPHA_NUM ; i++ ) {
        alpha_count[ i ]=0;
        alpha [ i ] = 'a' + i;
    }
    fp = fopen("file.txt", "w");
    while( ch != '\n'  )
    {
        ch = getchar();
        if( (ch>='a' && ch <= 'z') || (ch>='A' && ch<='Z') || ch==' ')
        fputc(ch, fp);
    }
    fclose(fp);
    create_letter_distribution_program();
    return 0;
}

int count_letters( char letter ) {
    int num_letter;
    if ( letter >= 'a' && letter <= 'z' ) {
        letter = letter - 'a';
        for ( num_letter = 0 ; letter > 0 ; letter-- ) num_letter++;
        alpha_count[ num_letter ]++;
    } else if ( letter >= 'A' && letter <= 'Z' ){
        letter = letter - 'A';
        for ( num_letter = 0 ; letter > 0 ; letter-- ) num_letter++;
        alpha_count[ num_letter ]++;
    }
    return 0;
}

int create_letter_distribution_program( ) {
    int i, swap, max, count;
    char c,swap_c;
    FILE *fp;
    fp = fopen( "file.txt" , "r");
    if(!fp) return -1;
    else {
        while(!feof(fp))
        {
            c = fgetc(fp);
            count_letters(c);
        }
        fclose(fp);
        for( count = 0 ; count < ALPHA_NUM ; count++ ) {
            max=count;
            for ( i = count+1; i < ALPHA_NUM; i++ ) {
                if( alpha_count [ max ] < alpha_count [ i ] ) {
                    max = i;
                }
            }
            swap = alpha_count [ max ];
            alpha_count [ max ] = alpha_count [ count ];
            alpha_count [ count ] = swap;
            swap_c = alpha [ max ];
            alpha [ max ] = alpha [ count ];
            alpha [ count ] = swap_c;
        }
        for(i=0; i<ALPHA_NUM; i++) {
            for( count = 0 ; count < ALPHA_NUM ; count++ ) {
                if( alpha_count[ count ] == alpha_count[ count + 1 ] && count < ALPHA_NUM-1 ) {
                    if( alpha[ count ] > alpha[ count + 1 ] ) {
                        swap = alpha_count [ count+1 ];
                        alpha_count [ count+1 ] = alpha_count [ count ];
                        alpha_count [ count ] = swap;
                        swap_c = alpha [ count+1 ];
                        alpha [ count+1 ] = alpha [ count ];
                        alpha [ count ] = swap_c;
                    }
                }
            }
        }
        for ( i = 0; i < ALPHA_NUM ; i++ ) {
            printf("%c : %d \n", alpha[i], alpha_count[i]);
        }
        return 0;
    }
}
