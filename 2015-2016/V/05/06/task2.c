#include <stdio.h>
int exact_square(int numeral);
int main()
{
	int numeral;
	scanf("%d",&numeral);
	printf("%d\n",exact_square(numeral));
	return 0;
}
int exact_square(int numeral){
	int numeration;
	for(numeration=0;numeral>numeration;numeration++)
    {
        if(numeration * numeration == numeral)
        {
            return 1;
        }
    }
    return 0;
}
