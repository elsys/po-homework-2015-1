#include <stdio.h>

void dec_to_hex();
void hex_to_dec();
void print_hex( int n);

int main()
{
	char a;
	do
	{
		//printf("Vavedi 'd' za preobrazuvane na tsviat v desetichna broina sistema v shestnaisetichna i 'h' za obratnoto.");
		a=getchar();
	}
	while(a!='d' && a!='h');
	if(a=='d')
	{
		dec_to_hex();
		return 0;
	}
	if(a=='h')
	{
		hex_to_dec();
		return 0;
	}
	return -666;
}

void dec_to_hex()
{
	int r, g, b;
	do
	{
		//printf("Vavedi tsviat. Naprimer '255, 76, 120'\n");
		scanf("%d, %d, %d", &r, &g, &b);
	}
	while(r<0 || r>255 || g<0 || g>255 || b<0 || b>255);
	printf("#");
	print_hex(r/16);
	print_hex(r%16);
	print_hex(g/16);
	print_hex(g%16);
	print_hex(b/16);
	print_hex(b%16);
	//printf("\n");
}

void print_hex( int n)
{
	if(n<10)
		printf("%d",n);
	else
		printf("%c",87+n);
}

void hex_to_dec()
{
	char c;
	int i, sum[3];
	c=getchar();
	//printf("Vavedi tsviat. Naprimer '#a7f539'\n");
	c=getchar();
	for(i=0;i<3;i++)
	{
		sum[i]=0;
		c=getchar();
		if(c>='a' && c<='f')
			sum[i]+=(c-87)*16;
		if(c>='0' && c<='9')
			sum[i]+=(c-48)*16;
		c=getchar();
		if(c>='a' && c<='f')
			sum[i]+=(c-87);
		if(c>='0' && c<='9')
			sum[i]+=(c-48);
	}
	printf("rgb(");
	for(i=0;i<3;i++)
	{
		printf("%d",sum[i]);
		if(i<2)
			printf(", ");
	}
	printf(")");
	//printf("\n");
}