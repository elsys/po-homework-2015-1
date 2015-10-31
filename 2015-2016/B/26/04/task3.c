#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int create_letter_distribution_diagram( );
int count_letters(char);
int counter[26];
char lTTe[26];

int main () {

FILE *fp;
char ch;
int i;
for( i = 0 ; i <26; i++ ) {
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
create_letter_distribution_diagram();
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

int create_letter_distribution_diagram( ) {
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
        for( k = 0 ; k < 26 ; k++ ) {
            m=k;
            for ( i = k+1; i < 26; i++ ) {
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
        for(i=0; i<26; i++) {
        for( k = 0 ; k < 26; k++ ) {
        if( counter[k] == counter[k+1] && k < 26-1 ) {
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
        for ( i = 0; i < 26 ; i++ ) {
            printf("%c : %d \n", lTTe[i], counter[i]);
        }
        return 0;
    }
}
