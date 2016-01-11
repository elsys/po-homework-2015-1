#include <stdio.h>

int main()
{

    int arr[1000], i = 0;

    do
        scanf("%d", &arr[i]);
    while(arr[i++] != 42 && i < 1000);

    int n = i, j;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j+1]) {
                arr[j] = arr[j] + arr[j+1];
                arr[j+1] = arr[j] - arr[j+1];
                arr[j] = arr[j] - arr[j+1];
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
