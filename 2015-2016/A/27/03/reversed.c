#include <stdio.h>
#include <string.h>
int main()
{
	char text[100],temp;
	int lenght,beg,mid,end;
	printf("Text: ");
	fgets(text,100,stdin);
	beg=0;
	lenght=strlen(text);
	mid=lenght/2;
	if(lenght%2==0) mid--;
	end=lenght-1;
	while(end!=mid)
	{
		temp=text[end];
		text[end]=text[beg];
		text[beg]=temp;
		beg++;
		end--;
	}
	printf("%s\n",text);
	return 0;
}
