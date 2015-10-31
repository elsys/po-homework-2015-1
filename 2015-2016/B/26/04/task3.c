#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 26

int create_letter_distribution_program( );
int count_letters(char);
int counter[ NUM ];
char lTTe[ NUM ];

int main () {

FILE *fp;
char ch;
int i;
for( i = 0 ; i < NUM ; i++ ) {
counter[ i ]=0;
lTTe [ i ] = 'a' + i;
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
        counter[ num_letter ]++;
    } else if ( letter >= 'A' && letter <= 'Z' ){
        letter = letter - 'A';
        for ( num_letter = 0 ; letter > 0 ; letter-- ) num_letter++;
        counter[ num_letter ]++;
    }
    return 0;
}

int create_letter_distribution_program( ) {
 int i, swap, m, k;
  char c,swap_c;
   FILE *fp;
   fp = fopen( "file.txt" , "r");
   if(!fp) return -1;
  else {
   while(!feof(fp)){
   c = fgetc(fp);  
 count_letters(c);
    }
     fclose(fp);
        for( k = 0 ; k < NUM ; k++ ) {
            m=k;
            for ( i = k+1; i < NUM; i++ ) {
                if( counter [ m ] < counter [ i ] ) {
                    m = i;
                }
            }
            swap = counter [ m ];
            counter [ m ] = counter [ k ];
            counter [ k ] = swap;
            swap_c = lTTe [ m ];
            lTTe [ m ] = lTTe [ k ];
            lTTe [ k ] = swap_c;
        }
        for(i=0; i<NUM; i++) {
        for( k = 0 ; k < NUM ; k++ ) {
        if( counter[k] == counter[k+1] && k < NUM-1 ) {
         if( lTTe[ k ] > lTTe[ k + 1 ] ) {
                  swap = counter [ k+1 ];
                  counter [ k+1 ] = counter [ k ];
                  counter [ k ] = swap;
                  swap_c = lTTe [ k+1 ];
                  lTTe [ k+1 ] = lTTe [ k ];
                  lTTe [ k ] = swap_c;
                    }
                }
            }
        }
        for ( i = 0; i < NUM ; i++ ) {
            printf("%c : %d \n", lTTe[i], counter[i]);
        }
        return 0;
    }
}
