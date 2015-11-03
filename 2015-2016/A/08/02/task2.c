/*Programa za kapitalizirane na simvolen niz do namiraneto na posledovatelnostta "STOP"*/
/*Ot uslovieto na zadachata ne razbrah dali mojem da polzvame buffer, zatova ne polzvah. Tova pravi testa za STOP malko po-grozen*/

#include <stdio.h>

int main(){
	char c;
	int i=0;
	while(c=getchar()){

		if (c == 'S')
			i++;
		else if (c == 'T' && i == 1)
			i++;
		else if (c == 'O' && i == 2)
			i++;
		else if (c == 'P' && i == 3){
			printf("\b\b\b"); // tova maha "STO", koeto inache bi stoqlo v kraq na stringa (printiram vseki simvol predi da mina na sledvashtiq i tova prosto maha izlishnite.)
			break;
		}
		else
			i = 0;

		if(c >= 'a' && c <= 'z')
			printf("%c", c-32);
		else
			printf("%c", c);	
	}
	return 0;
}
