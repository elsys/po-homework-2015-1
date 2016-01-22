#include <stdio.h>
#include <string.h>
void d_h(int d);
int pal();
int i;
char hex[8];

int main()
{
	int d=0;
	scanf("%d",&d);

    d_h(d);
    while(!pal())
    {
        d++;
        d_h(d);
    }

    for(i--;i>=0;i--)
    {
        printf("%c",hex[i]);
    }

	return 0;
}

int pal()
{
    int ii, j;
    for(ii=0,j=i-1 ; (ii<i && j>=0) ; ii++,j--)
    {
        if(hex[ii] != hex[j]) return 0;
    }
    return 1;
}

void d_h(int d)
{
    for(i=0;d>0;i++)
    {
        hex[i]=(d%16);
        d/=16;
    }
    hex[i+1] = '\0';

    for(int i=0 ; i<8 ; i++)
    {
        switch(hex[i])
        {
            case 0 : hex[i] = '0'; break;
            case 1 : hex[i] = '1'; break;
            case 2 : hex[i] = '2'; break;
            case 3 : hex[i] = '3'; break;
            case 4 : hex[i] = '4'; break;
            case 5 : hex[i] = '5'; break;
            case 6 : hex[i] = '6'; break;
            case 7 : hex[i] = '7'; break;
            case 8 : hex[i] = '8'; break;
            case 9 : hex[i] = '9'; break;
            case 10 : hex[i] = 'A'; break;
            case 11 : hex[i] = 'B'; break;
            case 12 : hex[i] = 'C'; break;
            case 13 : hex[i] = 'D'; break;
            case 14 : hex[i] = 'E'; break;
            case 15 : hex[i] = 'F'; break;
        }
    }
}
