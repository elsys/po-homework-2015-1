#include <stdio.h>

int is_magic(int,int(*)[]);

int main() {
    int n, i, j;
    do
        scanf("%d",&n);
    while(n <= 0);

    int sqr[n][n];

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++)
            scanf("%d",&sqr[i][j]);
        printf("\n");
    }
    printf("%d",is_magic(n, sqr));

    return 0;
}

int is_magic(int n, int (*sqr)[n]) {
    int i = 0, j;
    int sum = 0, tmp = 0;

    for(i = 0; i < n; i++)
        sum += sqr[i][i];
    for(j = n-1, i = 0; i < n; i++, j--) {
        tmp += sqr[i][i];
    }

    if(sum != tmp)
        return 0;
    sum = 0;
    for(i = 0; i < n; i++)
        sum += sqr[0][i];
    if(sum != tmp)
        return 0;
    sum = 0;
    for(i = 0;i < n; i++)
        sum += sqr[i][0];
    if(sum != tmp)
        return 0;
    return 1;


}
// 1 2
// 3 4
