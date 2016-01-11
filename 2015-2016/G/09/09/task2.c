#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

int counter,sum=0;
int number;
char sentence[160];
int one_click = 1; //a, d, g, j, m, p, t, w
int two_clicks = 2; //b, e, h, k, n, q, u, x
int three_clicks = 3;//c,f,i,l,o,r,v,y
int four_clicks = 4;//s,z

fgets(sentence, 160, stdin);

for(counter=0; sentence[counter] != 0; counter++){
    if(sentence[counter] == 'a' || sentence[counter] == 'd' || sentence[counter] == 'g' || sentence[counter] == 'j' || sentence[counter] == 'm' || sentence[counter] == 'p' || sentence[counter] == 't' || sentence[counter] == 'w' || sentence[counter] == ' ' ){
        sum=sum+one_click;
    }
    if(sentence[counter] == 'b' || sentence[counter] == 'e' || sentence[counter] == 'h' || sentence[counter] == 'k' || sentence[counter] == 'n' || sentence[counter] == 'q' || sentence[counter] == 'u' || sentence[counter] == 'x' ){
        sum=sum+two_clicks;
    }
    if(sentence[counter] == 'c' || sentence[counter] == 'f' || sentence[counter] == 'i' || sentence[counter] == 'l' || sentence[counter] == 'o' || sentence[counter] == 'r' || sentence[counter] == 'v' || sentence[counter] == 'y' ){
        sum=sum+three_clicks;
    }
    if(sentence[counter] == 's' || sentence[counter] == 'z'){
        sum=sum+four_clicks;
    }


}
printf("\n%d", sum);

return 0;
}
