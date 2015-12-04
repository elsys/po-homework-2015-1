#include <stdio.h>
#include <string.h>

void create_letter_distribution_diagram();

int main()
{
    create_letter_distribution_diagram();
    return 0;
}

void create_letter_distribution_diagram()
{
    FILE *fp;
    long lSize;
    char *buffer;

    fp = fopen ( "in.txt" , "rb" );
    if( !fp ) return;

    fseek( fp , 0L , SEEK_END);
    lSize = ftell( fp );
    rewind( fp );

    buffer = calloc( 1, lSize+1 );
    if( !buffer ) fclose(fp),fputs("memory alloc fails",stderr),exit(1);

    if( 1!=fread( buffer , lSize, 1 , fp) )
      fclose(fp),free(buffer),fputs("entire read fails",stderr),exit(1);

    int data[26][2];
    int i;
    for(i = 0; i < 26;i++){
        data[i][0] = i;
        data[i][1] = 0;
    }

    for(i = 0; buffer[i]; i++)
    {
        char c = tolower(buffer[i]);
        if(c >= 'a' && c <= 'z')
        {
            data[c - 'a'][1]++;
        }
    }
    int c, d;
    int swap[2];
    int length = strlen(buffer);
    for (c = 0 ; c < ( length - 1 ); c++)
    {
        for (d = 0 ; d < length - c - 1; d++)
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

    for(i = 0; i < 27;i++)
    {
        printf("%c: %d\n", data[i][0] + 'a', data[i][1]);
    }

    fclose(fp);
    free(buffer);
}

