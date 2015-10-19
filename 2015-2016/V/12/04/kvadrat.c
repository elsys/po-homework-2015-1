#include <stdio.h>


int input();
int check(int x);

int main(){
	int x = input();
	int result = check(x);
	if(result){
		printf("No it isnt.\n");
	}
	else{
		printf("Yes it is.\n");
	}
}

int input(){
	int x;
	printf("Tell the size of your square.\n");
	scanf("%d",&x);
	return x;
}


int check(int x){
	int sq[x][x];
	int sum = 0;
	int c_sum = 0;
	int k,i;
	//intput
	for (i = 0; i < x; i++)
	{
		for (k = 0; k < x; k++){
			printf("Enter sq[%d][%d]\n",i+1,k+1 );
			scanf("%d",&sq[i][k]);
		} 
	}


	//gleda nachalnata sum
	for(i = 0;i < x; i++){
		sum = sum + sq[0][i];
	}

	//Proverqva redovete
	for(i = 0; i < x; i++){//gleda reda
		c_sum = 0;
		for(k = 0; k < x ; k++){//gleda kolonkata
			c_sum = c_sum + sq[i][k];
		}
		if(c_sum != sum){
			return 1;
		}
	}

	//Proverqva kolonkite
	for(i = 0; i < x; i++){//gleda reda
		c_sum = 0;
		for(k = 0; k < x ; k++){//gleda kolonkata
			c_sum = c_sum + sq[k][i];
		}
		if(c_sum != sum){
			return 1;
		}
	}

	c_sum = 0;
	//proverqva diagonqlite
	for(i = 0;i < x; i++){
		c_sum = c_sum + sq[i][i];
	}
	if (c_sum != sum)
	{
		return 1;
	}

	c_sum = 0;

	for (i = x - 1; i >= 0; i--)
	{
		c_sum = c_sum + sq[i][i];
	}
	if(c_sum != sum){
		return 1;
	}

	return 0;
}
