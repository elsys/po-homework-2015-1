#include <stdio.h>
#include <string.h>

void HexToDec(char * hRGB, int * dR, int * dG, int * dB);
void DecToHex(int dR, int dG, int dB, char * hRGB);

int main(){
	char choice, hRGB[8];
	int dR, dG, dB;
	scanf("%c", &choice);

	if(choice == 'h'){
		scanf("%s", hRGB);
		HexToDec(hRGB, &dR, &dG, &dB);
		printf("rgb(%d, %d, %d)", dR, dG, dB);
	}
	else if(choice == 'd'){
		scanf("%d, %d, %d", &dR, &dG, &dB);
		DecToHex(dR, dG, dB, hRGB);
		printf("%s", hRGB);
	}

	return 0;
}

void HexToDec(char * hRGB, int * dR, int * dG, int * dB){
	char tempCh[3];
	int i, j, rgb[3], tempI;
	for(i = 0; i < 3; i++){
        rgb[i] = 0;
	}


	for(i = 1; i < 7; i+=2){

		for(j = 0; j < 2; j++)
			tempCh[j] = hRGB[i+j];
		tempCh[2] = '\0';

		for(j = 0; j < 2; j++){
			switch(tempCh[1-j]){
				case '0':case '1':case '2':case '3':
				case '4':case '5':case '6':case '7':
				case '8':case '9':
					tempI = tempCh[1-j] - '0';
					break;
				case 'A':case 'a':
					tempI = 10;
					break;
				case 'B':case 'b':
					tempI = 11;
					break;
				case 'C':case 'c':
					tempI = 12;
					break;
				case 'D':case 'd':
					tempI = 13;
					break;
				case 'E':case 'e':
					tempI = 14;
					break;
				case 'F':case 'f':
					tempI = 15;
					break;
			}

			if (j == 0)
				rgb[(i-1)/2] += tempI;
			else
				rgb[(i-1)/2] += tempI*16*j;
		}
	}

	*dR = rgb[0];
	*dG = rgb[1];
	*dB = rgb[2];
}

void DecToHex(int dR, int dG, int dB, char * hRGB){
	int modulo, i, j, rgb[3] = {dR, dG, dB};
	char tempRGB[3][3];

	hRGB[0] = '#';
	hRGB[1] = '\0';
	for(i = 0; i < 3; i++){
		j = 0;
		while(rgb[i] > 0){
			modulo = rgb[i] % 16;
			switch(modulo){
				case 1:case 2:case 3:case 4:
				case 5:case 6:case 7:case 8:
				case 9:case 0:
					tempRGB[i][1-j] = modulo + '0';
					break;
				case 10:
					tempRGB[i][1-j] = 'a';
					break;
				case 11:
					tempRGB[i][1-j] = 'b';
					break;
				case 12:
					tempRGB[i][1-j] = 'c';
					break;
				case 13:
					tempRGB[i][1-j] = 'd';
					break;
				case 14:
					tempRGB[i][1-j] = 'e';
					break;
				case 15:
					tempRGB[i][1-j] = 'f';
					break;
			}
			rgb[i] /= 16;
			j++;
		}
		tempRGB[i][j] = '\0';
	}

	for(i = 0; i < 3; i++){
		strcat(hRGB, tempRGB[i]);
	}
}