#include <stdio.h>
#include <string.h>

int main()
{
	char a[10];
	int n, l, sum=0;
	printf("Strange letters number:");
	scanf("%s", a);
    l=strlen(a);

	for(n=0; n<l; n++){
        if(a[n]=='I'&&a[n+1]=='V'){sum=sum+4; n++;} else if(a[n]=='V')sum=sum+5;
        if(a[n]=='I'&&a[n+1]=='X'){sum=sum+9; n++;} else if(a[n]=='X')sum=sum+10;
        if(a[n]=='I'&&a[n+1]=='L'){sum=sum+48; n++;} else if(a[n]=='L')sum=sum+50;
        if(a[n]=='I'&&a[n+1]=='C'){sum=sum+99; n++;} else if(a[n]=='C')sum=sum+100;

    }

    if(a[l-1]=='I'&&a[l-2]=='I'&&a[l-3]=='I') {sum=sum+3;} else if(a[l-1]=='I'&&a[l-2]=='I') sum=sum+2;
	if(sum<256){
	printf("Normal number with digits: %d", sum);
	}else printf("Sorry bro, it's toooo big");

return 0;
}
