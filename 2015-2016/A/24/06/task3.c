#include <stdio.h>
#define MAX 200
int main()
{
	int number_rein,arr_rein[MAX],i,j,checker = 0,rudolph;
	do{
		scanf("%d",&number_rein);
		if(number_rein%2 == 0)
			printf("The reindeers must be an odd number");
		else
			break;
	}while(1);



	for(i = 0; i < number_rein; i++)
	{
		scanf("%d",&arr_rein[i]);
	}	


	for(i = 0; i < number_rein; i++)
	{
		checker	 = 0;
		for(j = 0 ; j < number_rein ; j++)
		{
			if(i != j && arr_rein[i] == arr_rein[j])
			{
				checker = 1;
				break;
			}
		}

		if(checker == 0){
			rudolph = arr_rein[i];
			break;
		}
	}


	printf("%d",rudolph);

	return 0;
}
