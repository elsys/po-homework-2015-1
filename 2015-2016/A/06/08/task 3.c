#include <stdio.h>
int isRudolf(int a[], int n, int element);
int main()
{
	int array[200], n, i;
	do
	{
		printf("Enter the number of deers: ");
		scanf("%d", &n);
	} while (n % 2 == 0);												// ����� �� ������� � ����� �����
	for (i = 0; i < n; i++)
	{
		do
		{
			scanf("%d", &array[i]);
		} while (array[i] < 1 || array[i] > 100);// ������� �� ����� � ����� [1,100]
	}
	for (i = 0; i < n; i++)
	{
		if (isRudolf(array, n, array[i]) == 1)					// ������ � ������
			break;
	}
	printf("%d\n", i);															// �������� �� ������
	return 0;
}
/* ����� ���� �� ���������� �� element � ����� a � n �������� */
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
