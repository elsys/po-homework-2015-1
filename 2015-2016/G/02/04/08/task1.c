#include<stdio.h>
int main(){
	char type;
	scanf("%s", &type);
	if (type == 'h') {
		unsigned int hex;
		char buff[6];
		scanf("%s", buff);
		sscanf(buff, "%*c%x", &hex);
		int red, green, blue;
		red = ((hex >> 16) & 0xFF);
		green = ((hex >> 8) & 0xFF);
		blue = ((hex) & 0xFF);
		printf("rgb(%d, %d, %d)\n", red, green, blue);
	} else if (type == 'd') {
		int red, green, blue;
		scanf("%d, %d, %d", &red, &green, &blue);	
		printf("#%02x%02x%02x\n", red, green, blue);
	} else {
		printf("Invalid input");
	}
	return 0;
}
