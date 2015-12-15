#include <stdio.h>

int is_prime(int);
int main() {
    int n, prime;

    printf("Enter number: \n");
    scanf("%d",&n);

    prime = is_prime(n);
    if (prime == 1) {
      printf("1");
    }
   else {
      printf("0");
   }

    return 0;
}

int is_prime(int n) {
    int i;

    for(i = 2; i <= n - 1; i++) {
        if (n%i == 0) {
            return 0;
        }
    }
    if (i == n) {
        return 1;
    }
    return 0;
}
