#include <stdio.h>
void db_conv(int, int [8]);
int main(){
    int a,b,two[8] = {0,0,0,0,0,0,0,0};
    
    do{
    
        scanf("%d", &a);
        
    }while( a < 0 || a > 7 );
    
    do{
    
        scanf("%d", &b);
        
    }while( b < 0 || b > 200 );
    
    db_conv(b, two);
    
    printf("%d \n", two[7-a]);
    
    return 0;
    
}
void db_conv(int b,int two[8]){

    int count;
    
    for(count = 7; b !=0; count-- ){
    
        two[count] = b%2;
        b = b / 2;
        
    }
    
}
