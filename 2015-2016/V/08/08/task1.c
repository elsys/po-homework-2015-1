#include <stdio.h>


int hex_dec();
int dec_hex();


int main()
{
	char h;

	scanf("%c",&h);

	switch(h)
	{
		case 'd': dec_hex(); break;
		case 'h': hex_dec(); break;
	}


	return 0;
}

int hex_dec(){
	
	char a[8];
	scanf("%8s",a);
	for (int i = 0; i < 7; ++i)
	{
		a[i]=a[i+1];
	}

	for (int i = 0; i < 7; ++i)
	{
		switch(a[i])
		{
			case 'a': a[i]=10; break;
			case 'b': a[i]=11; break;
			case 'c': a[i]=12; break;
			case 'd': a[i]=13; break;
			case 'e': a[i]=14; break;
			case 'f': a[i]=15; break;
		}
	}
	printf("rbg(");
	printf("%d", (a[0]<<4)|a[0+1]);
	for (int i = 2; i < 6; i=i+2)
	{
		printf(", %d", (a[i]<<4)|a[i+1]);
		
	}
	printf(")");

	

	return 0;
}


int dec_hex(){

	int r,g,b;
	scanf("%d, %d, %d",&r,&g,&b);

	printf("#%x%x%x", r,g,b);
	return 0;
}