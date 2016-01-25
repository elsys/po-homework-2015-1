#include <stdio.h>

int main()
{

    int masiv[1000], i = 0;

    do
        scanf("%d", &masiv[i]);
    while(masiv[i++] != 42 && i < 1000);

    int n = i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(masiv[j] > masiv[j+1]) {
            	int temp = masiv[j];
            	masiv[j] = masiv[j+1];
            	masiv[j+1] = temp;
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", masiv[i]);
    }

    return 0;
}
