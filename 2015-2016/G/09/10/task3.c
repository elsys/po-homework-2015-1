#include<stdio.h>
#include<string.h>

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

int main(){
    int decimalNumber,remainder,quotient;
    int i=1,j,temp;
    char hexadecimalNumber[100];
	char comparable[100];

    
    scanf("%d",&decimalNumber);

    quotient = decimalNumber;

    while(quotient!=0){
         temp = quotient % 16;

      //To convert integer into character
      if( temp < 10)
           temp =temp + 48;
      else
         temp = temp + 55;

      hexadecimalNumber[i++]= temp;
      quotient = quotient / 16;
  }


	strcpy(comparable,hexadecimalNumber);
	strrev(comparable);
	if (strcmp(hexadecimalNumber,comparable) == 0){
		for(j=0; j=strlen(hexadecimalNumber); j++){
			printf("%c", hexadecimalNumber[j]);
		}
	}
	else{
		printf("Nope");
	}

    return 0;
}
