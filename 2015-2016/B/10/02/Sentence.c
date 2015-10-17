#include <stdio.h>

#include <string.h>

int main () {

	char sen[400];
	int br,l,j;
	printf("Vavedi izrechenie: ");gets(sen);
	
	l = strlen(sen);
		
	for(br = 0;br < l;br++)
		{
			if(sen[br] == 'S')
				if(sen[br + 1] == 'T')
					if(sen[br + 2] == 'O')
						if(sen[br + 3] == 'P') {
					for(j = br - 1;j > 0;j--) {
						if(sen[j] >= 97 && sen[j] <= 122)
							sen[j] = sen[j] - 32;
					}								
				}
		}
	puts(sen);	

	return 0;
}
