#include<stdio.h>
#include<string.h>
int main(){
char s[13],t;
int y;
scanf("%s",s);
for(y=13;y>0;y--){
if(s[y]=='2'){t=s[0];s[0]=s[y];s[y]=t;}
if(s[y]=='3'){t=s[1];s[1]=s[y];s[y]=t;}
if(s[y]=='4'){t=s[2];s[2]=s[y];s[y]=t;}
if(s[y]=='5'){t=s[3];s[3]=s[y];s[y]=t;}
if(s[y]=='6'){t=s[4];s[4]=s[y];s[y]=t;}
if(s[y]=='7'){t=s[5];s[5]=s[y];s[y]=t;}
if(s[y]=='8'){t=s[6];s[6]=s[y];s[y]=t;}
if(s[y]=='9'){t=s[7];s[7]=s[y];s[y]=t;}
if(s[y]=='T'|| s[y]=='t'){t=s[8];s[8]=s[y];s[y]=t;}
if(s[y]=='J'|| s[y]=='j'){t=s[9];s[9]=s[y];s[y]=t;}
if(s[y]=='Q'|| s[y]=='q'){t=s[10];s[10]=s[y];s[y]=t;}
if(s[y]=='K'|| s[y]=='k'){t=s[11];s[11]=s[y];s[y]=t;}
if(s[y]=='A'|| s[y]=='a'){t=s[12];s[12]=s[y];s[y]=t;}

}
printf("\n%s",s);
return 0;
}
