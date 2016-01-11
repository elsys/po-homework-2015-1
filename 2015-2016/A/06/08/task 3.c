#include <stdio.h>
int isRudolf(int a[], int n, int element);
int main()
{
	int array[200], n, i;
	do
	{
		printf("Enter the number of deers: ");
		scanf("%d", &n);
	} while (n % 2 == 0);												// броят на елените е четно число
	for (i = 0; i < n; i++)
	{
		do
		{
			scanf("%d", &array[i]);
		} while (array[i] < 1 || array[i] > 100);// номерът на елена е извън [1,100]
	}
	for (i = 0; i < n; i++)
	{
		if (isRudolf(array, n, array[i]) == 1)					// еленът е Рудолф
			break;
	}
	printf("%d\n", i);															// индексът на Рудолф
	return 0;
}
/* Връща броя на срещанията на element в масив a с n елемента */
int isRudolf(int a[], int n, int element)
{
	int k = 0, i;
	for (i = 0; i < n; i++)
	{
		if (a[i] == element)
			k++;
		if (k == 2)
			break;
	}
	return k;
}
