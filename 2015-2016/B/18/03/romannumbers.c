#include<stdio.h>
#include<string.h>

int main (){

    char number[1000];
    int index = 1;
    int lenght = 0;
    int sum = 0;
    
    scanf("%[^\n]s", number);
    
    lenght = strlen(number);
    
    for(index = 1; index <= lenght; index++)
    {
        if(number[index] == 'C' && number[index - 1] != 'X') 
            sum = sum + 100;
            
        if(number[index] == 'C' && number[index - 1] == 'X')
            sum = sum + 90;
        
        if(number[index] == 'L' && number[index - 1] != 'X') 
            sum = sum + 50;
            
        if(number[index] == 'L' && number[index - 1] == 'X')
            sum = sum + 40;
            
        if(number[index] == 'X' && number[index - 1] != 'I') 
            sum = sum + 10;
            
        if(number[index] == 'X' && number[index - 1] == 'I')
            sum = sum + 9;
            
        if(number[index] == 'V' && number[index - 1] != 'I') 
            sum = sum + 5;
            
        if(number[index] == 'V' && number[index - 1] == 'I')
            sum = sum + 4;
            
    }
    
    printf("%d\n", sum);
    
    return 0;

}

