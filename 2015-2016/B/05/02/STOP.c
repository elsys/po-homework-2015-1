#include<stdio.h>
#include<string.h>
int main(){
	char c[1000];
	printf("\nInput:");
	gets(c);
	int i=0,k,y;
	k=strlen(c);
	while(i<k){
        if(c[i]=='S'){
			if(c[i+1]=='T'){
				if(c[i+2]=='O'){
					if(c[i+3]=='P')break;
                }
            }
        }
        i++;
        }
        for(y=0;y<k;y++){
		if(c[y]>='a'&&c[y]<='z')
			printf("%c", c-32);
		else
			printf("%c", c);
        }
	return 0;
}
