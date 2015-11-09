#include <stdio.h>
#include <stdlib.h>
void next_generation(int *current , int *next , int lenght);
int main(){
    int current[20],next[20],lenght,i,k,n;
    scanf("%d",&lenght);
    next[ 0 ] = 0;
    next[ lenght - 1] = 0;
    for( i = 0 ; i < lenght ; i++ ){
        scanf("%d", &current[ i ]);}
    for( i = 0 ; i < lenght ; i++){
            if( current[ i ] == 1)printf("* ");
            if( current[ i ] == 0)printf(". ");
            }
    printf("\n");
    for( i = 0 ; i <= 1000 ; i++ ){
        next_generation(current,next,lenght);
        for(k = 0,n = 0 ; k < lenght ; k++){
            if( next [ k ] == 0)n++;
        }
        if( n == lenght)break;
        }

return 0;
}
void next_generation(int *current , int *next , int lenght ){
    int k,i;
    for( k = 0 ; k < lenght - 2 ; k++){
        if( current[ k ] != current[ k + 2 ])next[ k + 1 ] = 1;
        else next[ k + 1 ] = 0;
        }

    for( i = 0 ; i < lenght ; i++){
        if( next[ i ] == 1 ) printf("* ");
        if( next[ i ] == 0 ) printf(". ");
        }
    printf("\n");
    for( i = 0 ; i < lenght ; i++)
        current[ i ] = next[ i ];
}
