#include <stdio.h>
#include <string.h>

int is_prime();
int ConvertStrToInt();

int main(){
    char InpStr[37];

    printf("Enter a number: ");
    fgets(InpStr,37,stdin);

    printf("%d",is_prime(InpStr));

    return 0;
}

int is_prime(char InpStr[37]){
    int len,i,numb;

    len=strlen(InpStr)-1;
    for(i=0;i<len;i++){
        if(InpStr[i]<'0'||InpStr[i]>'9')
            return -1;
    }

    numb=ConvertStrToInt(InpStr,len);

    if(numb==0||numb==1)
        return 0;

    for(i=2;i<numb;i++){
        if(numb%i==0)
            return 0;
    }

    return 1;
}

int ConvertStrToInt(char* InpStr,int len){
    int i,numb=0;

    for(i=0;i<len;i++){
        numb=numb+(InpStr[i]-'0');
		if(i<len-1)
			numb=numb*10;
	}
	return numb;
}
