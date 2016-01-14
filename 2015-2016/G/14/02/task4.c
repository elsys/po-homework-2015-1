
#include <stdio.h>

int main()
{
	char c;
	int i;
	int count[10];

    for(i = 0;i < 10;++i)
        count[i] = 0;

    while((c = getchar()) != '\n')
        count[c - '0']++;

    for(i = 0;i < 10;++i)
		printf("%d : %d\n", i, count[i]);

    return 0;
}
