#include <stdio.h>
int main(){
int number,success=0,transform,counter=0,counter2=0;
char arr[10];
scanf("%d",&number);
    while(success == 0){
        transform = number;
        while(transform > 0){
            arr[counter] = transform % 16;
            transform = transform / 16;
            counter ++;
        }
        while(counter >= counter2+1){
            if (arr[counter2] == arr[counter-1]){
                counter2++;
                counter--;
            if (counter <= counter2+1)
                success = 1;
            }
            else break;
        }
        counter = 0;
        counter2 = 0;
        if (success == 0)
            number++;
    }
printf("%x",number);
return 0;
}
