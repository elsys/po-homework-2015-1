#include <stdio.h>

int digit(char* raw, int n) {

	int val = 0;
	int i = 0;

    while(i < n)
        val = val * 10 + (raw[i++] - '0');

	return val;

}


int main() {

	int number[100];
	int input[201];

    int i, n, k;

    char c;
	char raw[3];

	for(i = 0;i < 100;++i) number[i] = 0;
        i = k = n = 0;

	while ((c = getchar()) != EOF) {
        if(((c < '0') && (c > '9')) && (c != '\n')) printf("error");
        if(c != '\n') raw[k++] = c;
		else if (k > 0) {
			n = digit(raw, k);
			input[i++] = n;
            number[n - 1]++;
            k = 0;
		}

    }

    for(k = 0;k < 100;++k)
        if(number[k] == 1) n = k + 1;

	for(k = 0; k < i;++k)
        if(k == n) printf("\n%d\n", k);

	return(0);
}
