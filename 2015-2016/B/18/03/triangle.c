#include<stdio.h>

int main(){
  
    int rows = 0;
    int index = 0;
    int counter = 0;
    int spaces = 0;
    int b = 0;
    
    scanf("%d", &rows);
    
    for(index = rows; index > 0; index--)
    {
        printf(" ");
    }
    
    printf("*\n");
    
    for(index = 0; index < 2 * rows - 2; index = index + 2)
    {
        spaces++;
            
        for(counter = 0; counter < rows - spaces; counter++)
        {
            printf(" ");
        }     

        for(b = 0; b < index + 3; b++)
        {
            printf("*");
        }
        
        printf("\n");        
    }   
    
    return 0;
    
}
