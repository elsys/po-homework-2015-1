#include <stdio.h>

void sortData(int*[2]);

int main()
{
    int data[26][2];
    int i, c, d;
    int swap[2];
    char ch;
    for(i = 0; i < 26;i++){
        data[i][0] = i;
        data[i][1] = 0;
    }

    while(1)
    {

	ch = getchar();
	if(ch == EOF)
	{
	    break;
	}
	
	if(ch >= 'A' && ch <= 'Z')
	{
	   ch = ch + ('a' - 'A'); 
	}

	if(ch >= 'a' && ch <= 'z')
        {
            data[ch - 'a'][1]++;
        }
    }

    
    for (c = 0 ; c < 25; c++)
    {
        for (d = 0 ; d < 25 - c - 1; d++)
        {
            if (data[d][1] < data[d+1][1])
            {
                swap[0] = data[d][0];
                swap[1] = data[d][1];
                data[d][0] = data[d+1][0];
                data[d][1] = data[d+1][1];
                data[d+1][0] = swap[0];
                data[d+1][1] = swap[1];
            }
            else if(data[d][1] == data[d+1][1])
            {
                if(data[d][0] > data[d+1][0])
                {
                    swap[0] = data[d][0];
                    swap[1] = data[d][1];
                    data[d][0] = data[d+1][0];
                    data[d][1] = data[d+1][1];
                    data[d+1][0] = swap[0];
                    data[d+1][1] = swap[1];
                }
            }
        }
    }

    for(i = 0; i < 26;i++)
    {
        printf("%c: %d\n", data[i][0] + 'a', data[i][1]);
    }
    return 0;
}


