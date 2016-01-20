#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int Romanvalue(char c)
{
	int s=0;
	switch(c)
	{
	case 'I':
	s=1;
	break;
	case 'V':
	s=5;
	break;
	case 'X':
	s=10;
	break;
	case 'L':
	s=50;
	break;
	case 'C':
	s=100;
	break;
	case '\0':
	s=0;
	break;
	}
	return s;
}

int main()
{
char r[50];
int i=0;
int number=0;
printf("Enter Roman number=");scanf("%s",r);
while(r[i])
{
	if(Romanvalue(r[i])<0)
	{
	printf("Invalid number %s.",&r[i]);
	return 0;
	}
		if(Romanvalue(r[i])>256)
		{
		printf("Invalid number %s.",&r[i]);
		}
		if((strlen(r)-i)>2)
		{
			if(Romanvalue(r[i])<Romanvalue(r[i+2]))
			{
			printf("Invalid number.");
			return 0;
			}
		}									
				if(Romanvalue(r[i])>=Romanvalue(r[i+1]))
				{
					number=number+Romanvalue(r[i]);
				}
				else
				{
				number=number+(Romanvalue(r[i+1])-Romanvalue(r[i]));
				i++;
				}
				i++;
}
	printf("%d",number);
	return 0;
}
