#include <stdio.h>
int main() {
    int h, c, i, j, a[1000];

    for(i = 0, j = 1; i < 1000; i++, j++){
        scanf("%d", &a[i]);
        if(a[i] == 42) break;
    }

    for(i = 0; i < j - 1; i++) {
        for(c = 0; c < j - 1; c++) {
            if(a[i] < a[c]) {
                h = a[i];
                a[i] = a[c];
                a[c] = h;
            }
        }
    }
    printf("\n");
    for(i = 0; i < j - 1; i++)
   	 printf("%d ", a[i]);

	printf("\n");
    return (0);
}



