#include <stdio.h>
int nokia(char *s);
int main()
{
	char message[161];
	printf("Enter a sentence\n");
	gets(message);
	printf("%d\n", nokia(message));
	return 0;
}
int nokia(char *s)
{
	int k = 0, value = 0;
	while (*s != '\0')
	{
		if (*s == 'a' || *s == 'd' || *s == 'g' || *s == 'j' || *s == 'm' ||
			*s == 'p' || *s == 't' || *s == 'w' || *s == ' ')
			value = 1;
		else if (*s == 'b' || *s == 'e' || *s == 'h' || *s == 'k' || *s == 'n' ||
			*s == 'q' || *s == 'u' || *s == 'x')
			value = 2;
		else if (*s == 'c' || *s == 'f' || *s == 'i' || *s == 'l' || *s == 'o' ||
			*s == 'r' || *s == 'v' || *s == 'y')
			value = 3;
		else if (*s == 's' || *s == 'z')
			value = 4;
		k += value;
		s++;
	}
	return k;
}
