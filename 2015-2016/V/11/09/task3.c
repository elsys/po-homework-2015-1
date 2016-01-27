#include <stdio.h>

int palindrom_in_hex(int n)
{
	int k=0,p,i=1,j=3;
	do
	{
		k++;
	}while(n>>k!=0);
	while(k%4!=0){
		k++;
	}
	p=k/2;
	while(k-i>p){
		if((n&(1<<(k-i)))>>(k-i)!=(n&(1<<j))>>j){
			return 0;
		}
		i++;
		if((i-1)%4==0){
			j=j+8;
		}	
		j--;
	}
	return 1;
}

int main()
{
	int z;
	scanf("%d",&z);
	if(palindrom_in_hex(z)==1)
	{
		printf("%X",z);
		return 1;
	}
	do
	{
		z++;
	}while(palindrom_in_hex(z)==0);
	printf("%X",z);
	return 2;
}
