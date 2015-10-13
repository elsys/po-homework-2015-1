#include <stdio.h>
#include <string.h>

int main (){
	int counter1 = 0, counter2 = 0, middle = 0;
	char string[123];
	int temp = 0;
	
	printf("Enter string: ");
	scanf("%s",string);
	
	counter2 = strlen(string)-1;
	middle = strlen(string)/2;
	//Доста дълго време не съм боравил със C и не съм сигурен дали ще използвам правилния цикъл, но алгоритъма би трябвало да е правилен
	
	for(counter1 = 0; counter1<=middle; counter1++)
		{
			counter2--;
			temp = string[counter1];
			string[counter1] = string[counter2];
			string[counter2] = temp;
			}
	printf("\n%s",string);
	
	return 0;
}