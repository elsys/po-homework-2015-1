#include <stdio.h>
#include <string.h>
void main(){
    char str[250],temp;
    int i,lenght;
    printf("Enter a string:\n");
    scanf("%s",&str);
    lenght=strlen(str);
    for(i=0;i<lenght;i++){
        temp=str[i];
        str[i]=str[lenght-1];
        str[lenght-1]=temp;
        lenght--;
    }
    printf("The reversed string: \n");
    printf("%s",str);
}
