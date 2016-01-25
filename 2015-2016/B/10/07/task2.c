#include <stdio.h>

int get_the_bit (int,int);

int main () {

	int n; //Number - for example 35 (100011)
	int v; //Always true or false
	int p; //[0;7]
	int helper;

	
	scanf("%d %d %d",&n, &v, &p);

	helper = (n << p); 

	if (helper != v) {

		if (!v) n = n - (1 << p);
		else if (v) n = n + (1 << p); 
	}
	

	printf("%d\n",n);
	return 0;
}


