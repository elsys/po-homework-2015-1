#include <stdio.h>
#include <string.h>
int main()
{
			
	char s[160];
	int i=0,k=0,l;
	scanf("%160[^\n]", s);
	l=strlen(s);
	while(i<l){
	
	if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'){k++;i++;}
	if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x'){k=k+2;i++;}
	if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y'){k=k+3;i++;}
	if(s[i]=='s'||s[i]=='z'){k=k+4;i++;}
	if(s[i]==' '){i++;}
	}
	printf("%d",k);
	
return 0;
}
