#include<stdio.h>
#include<string.h>

int main(){
    
    char a[50];
    int l = 0;

    scanf("%[^\n]s", a);
    l = strlen(a);
    
    for(; l >= 0; l--)
    {
	printf("%c", a[l]);
    }
	
    printf("\n");

    return 0;

}
