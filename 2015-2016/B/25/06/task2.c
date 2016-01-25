#include <stdio.h>
 #include <string.h>
int main()
{
    char four_click[]={'s','z'};
    char one_click[]={'a', 'd', 'g','j','m','p','t','w'};
    char two_click[]={'b', 'e', 'h','k','n','q','u','x'};
    char three_click[]={'c', 'f', 'i','l','o','r','v','y'};
    char space[]={' '};

    char text[160];
    int i=0, k=0, how_many_clicks = 0;
    scanf("%[^\n]s", &text);
    int l=strlen(text);
    for(i=0; i<l; i++){
                if(text[i]==space[0]) how_many_clicks++;
        else {
            for(k=0; k<8; k++){
                if(text[i]==one_click[k]) how_many_clicks++;
                else if(text[i]==two_click[k]) how_many_clicks= how_many_clicks+2;
                else if(text[i]==three_click[k]) how_many_clicks= how_many_clicks+3;
                else if(text[i]==four_click[k]) how_many_clicks= how_many_clicks+4;
            }
        }
    }

    printf("%d", how_many_clicks);
}
