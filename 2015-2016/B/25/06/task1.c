#include <stdio.h>
#include <string.h>
int main()
{
    char symbol[]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    char h_or_d;
    char color[100];
    int d_helper;
    int i, k=0, m=0, n=0, l;
    int number[3];
    int h_sum=0;

    scanf("%c \n", &h_or_d);
        if(h_or_d=='h'){
                scanf("%s", &color);
                l=strlen(color);
                printf("rgb(");
                for(i=1; i<l; i++){
                    for(k=0; k<16; k++){
                        if (color[i]==symbol[k]){
                            if(i%2==0) {h_sum=h_sum+k;
                                if(i!=(l-1)) printf("%d, ", h_sum);
                                else printf("%d)", h_sum);
                                h_sum=0;
                            }else h_sum=h_sum+k*16;
                        }
                    }
                }
            }

        else {
                printf("#");
                    for(; n<3; n++){
                number[n]=0;
        }
        n=0;

        scanf("%[^\n]s", &color);
        l=strlen(color);
        for(i=0; i<l; i++){
                if(color[i]==','){n++; i++;}
                    else{
                            for(k=0; k<10; k++){
                                if(color[i]==symbol[k]){
                                    number[n] = number[n]*10;
                                    number[n]= number[n]+k;
                                }
                            }
                        }
        }
        for(n=0; n<3; n++){
                for(k=0; k<16; k++){
                  if(number[n]/16==k) printf("%c", symbol[k]);
                }
                for(k=0; k<16; k++){
                if(number[n]%16==k) printf("%c", symbol[k]);
                }
        }
}



return 0;
}



