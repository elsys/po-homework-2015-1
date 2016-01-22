#include <stdio.h>

void make_binary(int,int []);

int main()
{

    	int a, b, binary[8] = {0, 0, 0, 0, 0, 0, 0, 0}, result;
    
    	do{
    
        	scanf("%d", &a);
    
    	}while(a < 0 || a > 7);
    
    	do{
    
        	scanf("%d", &b);
    
    	}while(a < 0 || a > 200);
    
    	make_binary(b, binary);
    	
    	result = binary[7-a];
    
    	printf("%d", result);

	return 0;
	
}
void make_binary(int decimal, int binary[8]){

    int counter = 7;
    
    for(;decimal != 0;counter--){
    
        binary[counter] = decimal % 2;
        decimal = decimal / 2;
        
    }
    
}
