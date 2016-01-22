#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {
	char s[MAX];
	scanf("%s", s);
	int l=0, result=0; 
	l=strlen(s)-1;
	
	for( int i = 0 ; i < l ; i++, l-- ) {
		
		if( s[i] != s[l] ) {
			result=1;
			break;
		}
	}	
	printf("%d", result);	
}
