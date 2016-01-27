#include<stdio.h>
#include<string.h>

void conv_h_to_d() {

	char a;
	int i, help[3];

	a = getchar();
	a = getchar();

	for(i = 0; i < 3; i++) {
		help[i] = 0;
		a = getchar();
		if(a >= 'a' && a <= 'f')
			help[i] = help[i] + (a-87)*16;
		if(a >= '0' && a <= '9')
			help[i] = help[i] + (a-48)*16;
		a = getchar();
		if(a >= 'a' && a <= 'f')
			help[i] = help[i] + (a-87);
		if(a >= '0' && a <= '9')
			help[i] = help[i] + (a-48);
	}
	printf("rgb(");
	for( i = 0; i < 3; i++) {
		printf("%d", help[i]);
		if( i < 2 )
			printf(", ");
	}
	printf(")");
}

int main() {

	int r;
	int g;
	int b;
	char a;

	do {
		a = getchar();
	}while( a != 'd' && a != 'h' );

	if( a == 'd' ) {
		do {
			scanf("%d, %d, %d", &r, &g, &b);
		}while( r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255);
		printf("#%x%x%x\n", r, g, b);
		return 0;
	}

	if( a == 'h' ) {
		conv_h_to_d();
		return 0;
	}
	return 0;
}








