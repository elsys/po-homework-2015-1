#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int DECTOHEX(long int jem);
int pow_(int num,int exp);
void HEXTODEC(char *str);
int main()
{


 int RGB1,RGB2,RGB3;
 char t,str[6];
 do {
 scanf("%s",&t);
 }while(t!='h' && t != 'd');



if(t=='d'){
 scanf("%d, %d, %d",&RGB1,&RGB2,&RGB3);

 printf("#%x%x%x",RGB1,RGB2,RGB3);
}
else
{

 scanf("%*c#%s",str);

 HEXTODEC(str);
 RGB1=(str[0]*16)+str[1];
 RGB2=(str[2]*16)+str[3];
 RGB3=(str[4]*16)+str[5];


 printf("rgb(%d, %d, %d)",RGB1,RGB2,RGB3);
}



 return 0;
}

void HEXTODEC(char* str)
{
 for(int i = 0;i<6;i++){
 switch(str[i]){
  case 'a':str[i] = 10;break;
  case 'b':str[i] = 11;break;
  case 'c':str[i] = 12;break;
  case 'd':str[i] = 13;break;
  case 'e':str[i] = 14;break;
  case 'f':str[i] = 15;break;
  default: str[i] -= 48; break;
  }
 }
}
	
	

