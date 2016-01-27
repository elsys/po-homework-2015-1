#include <stdio.h>#include <stdio.h>

int main()
{
    int n, v, p;
    scanf("%d", &n);
    scanf("%d", &v);   
    if(v<0 || v>1) return 0;
	else scanf("%d", &p);
    if(p<0 || p>7) return 0;
	else 
	{
		if(v == 1)
		{
			n = (1 << p) | n;
		}
			if(v == 0)
		{
			n = (~(1 << p)) & n;
		}
	}
    printf("%d", n);
     return 0;
}