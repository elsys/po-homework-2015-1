# include <stdio.h>
# include <math.h>

int isExactSquare(float);

int main()   
{
	int n ;
	
	printf("Enter a number : ") ;
	scanf("%d", &n) ;   
	printf("%d",isExactSquare(n)) ;
	return 0 ;
}

int isExactSquare(float p) {
	float m = sqrt(p) ;
	
	if(m == (int)sqrt(p))
		return 1 ;
	else
		return 0 ;
}

