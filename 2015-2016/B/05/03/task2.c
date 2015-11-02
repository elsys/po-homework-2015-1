#include<stdio.h>
#include<string.h>
int main(){
char c[1001];
char y;
printf("Input: ");
fgets(c,sizeof c,stdin);
	int i,x;
	x=strlen(c)-1;
	for(i=0;i<x;i++)
        {
            y=c[i];
            c[i]=c[x];
            c[x]=y;
            x--;
        }
	printf("%s\n",c);
return 0;
}
