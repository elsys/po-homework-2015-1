#include <stdio.h>

int main()

{
	int n;
	int deers[n];
	int s[100] = {0};
	int k = 0, Rudolf, i;

	do
	{
		scanf("%d", &n);
	}while(n % 2 == 0 || n >= 201);

	for(i = 0; i < n; i++)
	{
		do
        	{
            		scanf("%d", &deers[i]);
            		if((deers[i] - 1) < 100)
            	{
                	if(s[deers[i] - 1] < 2)
                {
                    	s[deers[i] - 1]++;
                	k = 1;
                }

            	}
        	}while(k == 0);

        	k = 0;
    	}
    	for(i = 0; i < 100; i++)
    	{
        	if(s[i] == 1)
        	{
            		Rudolf = i + 1;
            		break;
        	}
    	}
    printf("Rudolf is: %d \n", Rudolf);
    return 0;

}
