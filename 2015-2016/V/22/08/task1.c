#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cr16[1000];
    char res3[1000];
    int cr10[1000];
    int res[1000];
    int res2[1000];
    int i=0,j=0,a=10,b=11,c=12,d=13,e=14,f=15;
    char type;
    scanf("%c%*c",&type);
    if(type=='h'){
            scanf("%*c%c",&cr16[i]);
            scanf("%c",&cr16[i+1]);
            scanf("%c",&cr16[i+2]);
            scanf("%c",&cr16[i+3]);
            scanf("%c",&cr16[i+4]);
            scanf("%c",&cr16[i+5]);
            scanf("%c",&cr16[i+6]);
            while(i<=5){
                   if(cr16[i]=='0')
                        res[i]=0;
                   if(cr16[i]=='1')
                        res[i]=1;
                    if(cr16[i]=='2')
                        res[i]=2;
                    if(cr16[i]=='3')
                        res[i]=3;
                    if(cr16[i]=='4')
                        res[i]=4;
                    if(cr16[i]=='5')
                        res[i]=5;
                    if(cr16[i]=='6')
                        res[i]=6;
                    if(cr16[i]=='7')
                        res[i]=7;
                    if(cr16[i]=='8')
                        res[i]=8;
                    if(cr16[i]=='9')
                        res[i]=9;
                    if(cr16[i]=='a')
                        res[i]=10;
                    if(cr16[i]=='b')
                        res[i]=11;
                    if(cr16[i]=='c')
                        res[i]=12;
                    if(cr16[i]=='d')
                        res[i]=13;
                    if(cr16[i]=='e')
                        res[i]=14;
                    if(cr16[i]=='f')
                        res[i]=15;

                i++;
            }
            i=0;
            res2[i]=res[i]*16+res[i+1];
            res2[i+1]=res[i+2]*16+res[i+3];
            res2[i+2]=res[i+4]*16+res[i+5];
            printf("rgb(%d, %d, %d)",res2[i],res2[i+1],res2[i+2]);
    }
    if(type=='d'){
        scanf("%d, %d, %d",&cr10[i],&cr10[i+1],&cr10[i+2]);
        res[i]=cr10[i]/16;
        res[i+1]=cr10[i]%16;
        res[i+2]=cr10[i+1]/16;
        res[i+3]=cr10[i+1]%16;
        res[i+4]=cr10[i+2]/16;
        res[i+5]=cr10[i+2]%16;
        for(i=0;i<=5;i++){
            if(res[i]==0)
                res3[i]='0';
            if(res[i]==1)
                res3[i]='1';
            if(res[i]==2)
                res3[i]='2';
            if(res[i]==3)
                res3[i]='3';
            if(res[i]==4)
                res3[i]='4';
            if(res[i]==5)
                res3[i]='5';
            if(res[i]==6)
                res3[i]='6';
            if(res[i]==7)
                res3[i]='7';
            if(res[i]==8)
                res3[i]='8';
            if(res[i]==9)
                res3[i]='9';
            if(res[i]==10)
                res3[i]='a';
            if(res[i]==11)
                res3[i]='b';
            if(res[i]==12)
                res3[i]='c';
            if(res[i]==13)
                res3[i]='d';
            if(res[i]==14)
                res3[i]='e';
            if(res[i]==15)
                res3[i]='f';
        }
        i=0;
        printf("#%c%c%c%c%c%c",res3[i],res3[i+1],res3[i+2],res3[i+3],res3[i+4],res3[i+5]);
    }


    return 0;
}
