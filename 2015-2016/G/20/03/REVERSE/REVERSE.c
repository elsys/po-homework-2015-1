#include<stdio.h>
    
    int main()
{
    char string[100];
    char reverse[100];
    int i=0;
    int j=0;

    scanf("%s",string);
    
    while(string[i]!='\0')
    i++;
    i--;
    while(i>=0)
 {
    reverse[j] = string[i];
    i--; j++;
  }
    reverse[j]='\0';
     
  
    printf("%s",reverse);
  
    return 0;
}
