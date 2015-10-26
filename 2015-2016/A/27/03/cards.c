#include <stdio.h>
#include <string.h>
int check();
void sort();
char cards[100];
int lenght;
int main()
{
	do{
		printf("Cards: ");
		fgets(cards,100,stdin);
		lenght=strlen(cards)-1;
	}while(check());
	sort();
	printf("Sorted: %s",cards);
	return 0;
}
int check()
{
	int counter;
	for(counter=0;counter<lenght;)
	{
		if((cards[counter]>='2'&&cards[counter]<='9')||cards[counter]=='A'||cards[counter]=='K'||cards[counter]=='Q'||cards[counter]=='J'||cards[counter]=='T') counter++;
		else return 1;
	}
	return 0;
}
void sort()
{
	char model[14]="23456789TJQKA",temp;
	int a,b,counter=0;
	for(a=0;a<13;a++)
		for(b=0;b<lenght;b++)
				if(cards[b]==model[a])
				{
					temp=cards[b];
					cards[b]=cards[counter];
					cards[counter]=temp;
					counter++;
				}
}
