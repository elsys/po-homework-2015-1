#include <stdio.h>
void db_conv(int, int [8]);
int main(){
    int n,p,v,count,two[8] = {0,0,0,0,0,0,0,0};
    
    scanf("%d", &n);
    
    do{
    
        scanf("%d", &v);
        
    }while( v < 0 || v > 1 );
    
    do{
    
        scanf("%d", &p);
        
    }while( p < 0 || p > 7 );
    
    db_conv(n, two);
    
    two[7-p] = v;
    
    n = two[0]*2;
    
    for(count = 1; count < 7 ; count++ ){
    
        n = (n + two[count])*2;
        
    }
    n = n + two[7];
    printf("%d \n", n);
    return 0;
}
void db_conv(int b,int two[8]){
    int count;
    
    for(count = 7; b !=0; count-- ){
    
        two[count] = b%2;
        b = b / 2;
        
    }
}
