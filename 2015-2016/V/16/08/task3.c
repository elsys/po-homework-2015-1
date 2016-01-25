#include <stdio.h>

int main()
{
    int n,i,j;
	int c[200];
    scanf("%d",&n);
    for(i = 0;i < n;i++) {
        scanf("%d", &c[i]);
	}
        for(i = 0;i < n;i++) {
                for(j = 0;j < n;j++) {
                if(j != i) {
                    if(c[i] == c[j]) {
                    	break;
			}
		}
	}
        if(n == j) {
            printf("%d", c[i]);
            return 0;
	        }
	}
	printf("%d", c[i+1]);
    return 0;
}
