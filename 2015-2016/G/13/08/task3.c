#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i, k, hasSecond = 0;
    scanf("%d", &n);
    int elks[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &elks[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (elks[i] == -1) {
            continue;
        }
        
        hasSecond = 0;

        for (k = i + 1; k < n; k++) {
            if(elks[k] == elks[i])
            {
                elks[i] = -1;
                elks[k] = -1;
                hasSecond = 1;
                break;
            }
        }
        
        if (hasSecond == 0 || (i == n - 1)) {
            printf("%d", elks[i]);
            break;
        }
   
    }
    return 0;
}
