#include <stdlib.h>
#include <string.h>
int main(){
char input_string[160];
int counter,counter_clicks=0;

 scanf("%[^\n]s", input_string);


    for(counter = 0;counter<strlen(input_string);counter++){

        switch(input_string[counter]){
            case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ' : counter_clicks=counter_clicks + 1;
            break;
            case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': counter_clicks=counter_clicks + 2;
            break;
            case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': counter_clicks=counter_clicks + 3;
            break;
            case 's': case 'z': counter_clicks=counter_clicks + 4;
            break;

        }
    }
    printf("%d", counter_clicks);

}

