#include <stdio.h>
#include <string.h>

int main(){
	int n,i; char s[100]; 
	scanf("%s",s);
	int l;
	l=strlen(s);
	for(i=0;i<l;i++,l--){
		if(s[i]!=s[l-1]){
			printf("String is not palindrome"); return 0;		
		}	
	}
	printf("String is palindrome");
	return 0;
}
