#include <stdio.h>
struct RGB			// ����
{
	int red;		// �������
	int green;		// ������
	int blue;		// �����
};
int decimal(char *s, char type);
RGB convert(char *s, char type);
void printRGB(RGB c, char type);
int main()
{
	RGB colour;
	char input[14], type;
	printf("Enter h to convert from hexadecimal to decimal in the format: #rrggbb\n");
	printf("Enter d to convert from decimal to hexadecimal in the format: rrr, ggg, bbb\n");
	scanf("%c", &type);
	fflush(stdin);			// �������� ������� �����
	gets(input);
	switch (type)
	{
	case 'h':
		colour = convert(input, 'h');
		printRGB(colour, 'h');
		break;
	case 'd':
		colour = convert(input, 'd');
		printRGB(colour, 'd');
		break;
	}
return 0;
}
/* ����������� ���� s � ���� �����, type �������� ���� �� ������:
  h - 16-�����, d - 10-����� */
int decimal(char *s, char type)
{
	int d = 0, value = 0;
	while (*s != '\0')
	{
		switch (type)
		{
		case 'd':												// ����� s ��������� 10-����� �����
			d = d * 10 + (*s - '0');
			break;
		case 'h':												// ����� s ��������� 16-����� �����
			switch (*s)
			{
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
case '9': value = *s - '0'; break;
			case 'a': value = 10; break;
			case 'b': value = 11; break;
			case 'c': value = 12; break;
			case 'd': value = 13; break;
			case 'e': value = 14; break;
			case 'f': value = 15; break;
			}
			d = d * 16 + value;
			break;
		}
		s++;
	}
	return d;
}
/* ���������� ���� s � ����, type �������� ���� �� ������:
   h - 16-�����, d - 10-����� */
RGB convert(char *s, char type)
{
	RGB c;
	char x[4];												// ���������� �� ����� (�, �, �)
	int i;
	switch(type)
	{
		case 'h':												// ����� s ��������� 16-����� �����
		// #������
			while (*s != '\0')
			{
				s++;													// �������� ������� #
				for (i = 0; i < 2; i++)	// �������
				{
					x[i] = *s;
					s++;
				}
				x[i] = '\0';
				c.red = decimal(x, type);
				for (i = 0; i < 2; i++)	// ������
				{
					x[i] = *s;
					s++;
				}
				x[i] = '\0';
				c.green = decimal(x, type);
				for (i = 0; i < 2; i++)	// �����
				{
					x[i] = *s;
					s++;
				}
				x[i] = '\0';
				c.blue = decimal(x, type);
			}
			break;
		case 'd':							// ����� s ��������� 10-����� �����
		// ���, ���, ���
			i = 0;
			while (*s != ',')	// �������
			{
				x[i] = *s;
				s++;
				i++;
			}
			x[i] = '\0';
			c.red = decimal(x, type);
			s++; s++;			// �������� , � �������� �������
			i = 0;
			while (*s != ',')	// ������
			{
				x[i] = *s;
				s++;
				i++;
			}
			x[i] = '\0';
			c.green = decimal(x, type);
			s++; s++;			// �������� , � �������� �������
			i = 0;
			while (*s != '\0')	// �����
			{
				x[i] = *s;
				s++;
				i++;
	}
			x[i] = '\0';
			c.blue = decimal(x, type);
			break;
		}
	return c;
}
void printRGB(RGB c, char type)	// ����� �� ����
{
	switch (type)
	{
	case 'h':
		printf("#%x%x%x\n", c.red, c.green, c.blue);
		break;
	case 'd':
		printf("rgb(%d, %d, %d)\n", c.red, c.green, c.blue);
		break;
	}
}
