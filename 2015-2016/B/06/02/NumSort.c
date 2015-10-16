#include <stdio.h>

int main(){
	int c[999];
	int k=0,i,d;
	printf("\n\n Add number different of 42 to sort, adn 42 to stop adding \n");
	while (k<999)
        {
		printf("\n Your number is: ");
		scanf("%d", &c[k]);
		if (c[k] == 42)
		{
        break;
		}
		k++;
        }
        for (i = 0; i < k; i++)
        {
		for(d = 0; d< k; d++)
		{
        if(c[i] > c[d])
        {
        int p = c[i];
        c[i] = c[d];
        c[d] = p;
        }
		}
        }
    for(i=0;i<k;i++) printf("\n%d",c[i]);
	return 0;
}

