/*Programa za printirane na triugulnik pri vkarana visochina*/

#include <stdio.h>

int main(){
	int h;
	scanf("%d", &h);

	int iHeight, iSpaces, iStars;
	for(iHeight=1; iHeight<=h; iHeight++){

		for(iSpaces=iHeight; iSpaces<=h; iSpaces++)		// broqt na space-ovete, koito mi trqbvat e raven na razlikata na h i iHeight
			printf(" ");

		for(iStars=1; iStars<=(2*iHeight-1); iStars++) 	// 2*iHeight-1  -  osnovata na triugulnik s visochina iHeight
			printf("*");

		printf("\n");
	}

	printf("\n");
	return 0;
}
