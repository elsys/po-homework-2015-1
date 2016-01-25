#include<stdio.h>
#include<string.h>

void nokia_click(char character, int* counter)
{
    if(character == 'a' || character == 'd'|| character == 'g'|| character == 'j'|| character == 'm'|| character == 'p'|| character == 't'|| character == 'w'|| character == ' ') *counter=*counter + 1;
    if( character == 'b' || character == 'e'|| character == 'h'|| character == 'k'|| character == 'n'|| character == 'q'|| character == 'u'||character == 'x') *counter=*counter + 2;
    if(character == 'c' || character == 'f'|| character == 'i'|| character == 'l'|| character == 'o'|| character == 'r'|| character  == 'v'|| character == 'y') *counter=*counter + 3;
    if(character == 's' || character == 'z') *counter=*counter + 4;

}

int main()
{
    char character;
    int count = 0;

while(character = getchar())
{
	if(character != '\n')
	    {
                nokia_click(character, &count);
            }
		else
		{
                break;
            	}
}

    printf("%d", count);

return 0;
}
