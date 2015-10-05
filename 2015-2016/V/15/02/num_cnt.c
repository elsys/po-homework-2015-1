#include <stdio.h>

#define positive( x ) ((x < 0) ? (-x) : (x))

unsigned int getSize(const long long int num) {
    if (num < 10) return 1;
    return 1 + getSize(num / 10);
}

int getNum(long long int num, unsigned int n)
{
	while(n != 0)
	{
		num/=10;
		n--;
	}
	return num%10;
}

int main()
{
	long long int num;
	scanf("%lld",&num);
	num = positive(num);

	int i = 0;
	while(i < getSize(num))
	{
		int tmp = getNum(num,getSize(num) - (i++) - 1);
		printf("%d : ", tmp);
		int j = 0;
		int cnt = 0;
		while(j < getSize(num))
		{
			if(getNum(num,getSize(num) - j - 1) == tmp)
			{
			cnt++;
			}
			j++;	
		}
		printf("%d\n",cnt);
	}	
	
	return 0;
}
