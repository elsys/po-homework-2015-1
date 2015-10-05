#include <stdio.h>

int main()
{

	int i, min, j, k,n;

	int array[999];

	for (i = 0; i <= 999; i++) {

		printf("vuvedi chislo");
		
		scanf_s("%d", &array[i]);

		if (array[i] == 42)break;

	}
	n = i;

	for (i = 0; i<=n; ++i)
	{
		 min = i;
		for (j = i; j<5; ++j)

			if (array[min]>array[j])

				min = j;

		k=array[min];
		array[min] = array[i];
		array[i]=k;
	}

	for (i = 0; i <=n; i++)

		printf("%d \n", array[i]);

	return 0;

}
