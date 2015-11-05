#include <stdio.h>

int exact_square ( int a )
{
	int res = 0, m;
	for ( m = 1; res < a; m ++ )
    {
		res = m * m;
		if ( res == a )
			return 1;
	}
	return 0;
}

int main()
{
	int a;
	scanf ( "%d", &a );
	printf ( "%d", exact_square(a) );
	return 0;
}
