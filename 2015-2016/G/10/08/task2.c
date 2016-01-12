#include <stdio.h>
#include <string.h>

int key_sum(char);

int main(){

	int n,sum = 0;
	char sentence[160];
	
	scanf("%[^\n]s" ,sentence);

	for(n = 0;n < strlen(sentence);n++){
	
		sum = sum + key_sum(sentence[n]);
		
	}

	printf("%d \n", sum);
	
	return 0;


}
int key_sum(char key){
	
	switch(key){
	
		case 'a': case 'd': case 'g': case 'j': case 'm': case 'p': case 't': case 'w': case ' ': return 1; break;
 		case 'b': case 'e': case 'h': case 'k': case 'n': case 'q': case 'u': case 'x': return 2; break;
 		case 'c': case 'f': case 'i': case 'l': case 'o': case 'r': case 'v': case 'y': return 3; break;
 		case 's': case 'z': return 4; break;
 		case '\n': break;
		
	}


	return 0;


}
