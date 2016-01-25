#include <stdio.h>

int main() {

    int num, tmp, broi = 0, i = 0, chisla[10] = { 0 };
    scanf("%d",&num);

    while(i < 10) {
        tmp = num;
        broi = 0;
        while(tmp > 0) {
            if(i == tmp%10)
				broi++;
            tmp /= 10;
        }
        if(broi >= 2)
        	chisla[i] = i;
        i++;
    }
    for(int i = 0; i < 10; i++)
    	if(chisla[i] != 0)
    		printf("%d ", chisla[i]);

    return 0;
}
