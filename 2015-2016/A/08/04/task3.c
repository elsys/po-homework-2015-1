#include <stdio.h>

#define LETTER_NUM 26

struct Diagram_t{
	char repChar;
	int numOcc;
};

void create_letter_distribution_diagram(struct Diagram_t * letterCount);
void create_diagram(struct Diagram_t * letterCount);
void sort_diagram(struct Diagram_t * letterCount);

int main(){
	struct Diagram_t diagram[26];
	int i;

	for(i = 0; i < LETTER_NUM; i++){
		diagram[i].repChar = 'a' + i;
		diagram[i].numOcc = 0;
	}

	create_letter_distribution_diagram(diagram);

	for(i = 0; i < LETTER_NUM; i++)
		printf("%c: %d\n", diagram[i].repChar, diagram[i].numOcc);

	return 0;
}

/*decoupling the creation and the sorting of the diagram felt like a need*/
void create_letter_distribution_diagram(struct Diagram_t * diagram){
	create_diagram(diagram);

	sort_diagram(diagram);
}

void create_diagram(struct Diagram_t * diagram){
	char c;

	while(scanf("%c", &c) != EOF){
		if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')){
			if(c >= 'A' && c <= 'Z')
				c += 32;
		
			diagram[c - 'a'].numOcc++;
		}
	}
}

void sort_diagram(struct Diagram_t * diagram){
	int i, j;
	struct Diagram_t temp;

	for(i = 1; i < LETTER_NUM; i++){
		for(j = 0; j < LETTER_NUM - 1; j++){
			if(diagram[j].numOcc < diagram[j+1].numOcc){
				temp = diagram[j];
				diagram[j] = diagram[j+1];
				diagram[j+1] = temp;
			}
		}
	}
}