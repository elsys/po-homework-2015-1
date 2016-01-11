#include <stdio.h>
#include <string.h>
 
int main(){
 
    int count = 0;
    char c;
    int foundLetter = 0;
 
    while ((c = getchar()) != EOF){
        if(!((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))){
            foundLetter = 0;
        }else{
                if(foundLetter == 0){
                    count++;
                }
                foundLetter = 1;
        }
    }
 
    printf("%d\n", count);
 
    return 0;
}
