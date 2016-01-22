#include <stdio.h>

void make_binary(int,int []);
int make_decimal(int []);

int main()
{

    	int n,v,p,binary[8] = {0, 0, 0, 0, 0, 0, 0, 0}, result;

	scanf("%d", &n);

	do{
	
		scanf("%d", &v);
	
	}while( v < 0 || v > 1 );
	
	do{
	
		scanf("%d", &p);
	
	}while( p < 0 || p > 7 );
	
    	make_binary(n, binary);
	
	binary[7 - p] = v;
	
	result = make_decimal(binary);
    
    	printf("%d \n", result);

	return 0;
	
}

void make_binary(int decimal, int binary[8]){

    int counter = 7;
    
    for(;decimal != 0;counter--){
    
        binary[counter] = decimal % 2;
        decimal = decimal / 2;
        
    }
    
}

int make_decimal(int binary[8]){

	int counter, number;
	
	number = binary[0]*2;
	
	for(counter = 1;counter < 7; counter++){
	
		number = (number + binary[counter])*2;
	
	}
	
	number = number + binary[7];
	
	return number;

}
