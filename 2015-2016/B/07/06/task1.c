#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char tip,hexa[7],decain[5],decain2[5];
    int i=0,deca[4] = {0,0,0,0}, hexanum[7],p=1;
    float helper,tupezik;
    scanf("%c",&tip);
    if(tip == 'h'){
        scanf("%s",hexa);
        for(i=0;i<7;i++){
            if(hexa[i] >= '0' && hexa[i] <= '9') hexanum[i] = hexa[i] - 48;
            if(hexa[i] >= 'a' && hexa[i] <= 'f') hexanum[i] = hexa[i] - 87;
        }
        for(i=1;i<4;i++){
            deca[i] = hexanum[i*2]+ hexanum[i*2-1]*16;
        }
        printf("rgb(%d, %d, %d)\n",deca[1],deca[2],deca[3]);
    }
    if(tip == 'd'){
        scanf("%s",decain);
        scanf("%s",decain2);
        strcat(decain,decain2);
        scanf("%s",decain2);
        strcat(decain,decain2);
        for(i=0;i<strlen(decain);i++){
            if(decain[i] != ',') deca[p] = deca[p]*10 + decain[i]-48;
            else p++;
        }
        p=0;
        for(i=1;i<=3;i++) {
            if(deca[i] > 16) {
                tupezik = deca[i];
                helper = tupezik/16;
                deca[i] = deca[i]/16;
                helper = (helper - deca[i])*16;
                if(deca[i]<10){
                    hexa[i*2-1] = deca[i] + 48;
                }
                else hexa[i*2-1] = deca[i] + 87;
                if(helper<10){
                    hexa[i*2] = helper + 48;
                }
                else hexa[i*2] = helper + 87;
            }
            else{
                hexa[i*2-1] = '0';
                if(deca[i-1]<10){
                    hexa[i*2] = deca[i] + 48;
                }
                else hexa[i*2] = deca[i] + 87;
            }
        }
        printf("#%c%c%c%c%c%c\n",hexa[1],hexa[2],hexa[3],hexa[4],hexa[5],hexa[6]);

    }

return 0;
}
