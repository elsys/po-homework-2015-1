#include<stdio.h>
int main(){
    int num ,num_cpy,i=1,j,temp;
    char hex_num[100];
    scanf("%d",&num);

    for(;;)
    {
        for(num_cpy= num; num_cpy!=0; i++)
        {
            temp = num_cpy % 16;
            if( temp < 10)
            temp =temp + 48;
            else
            temp = temp + 55;

            hex_num[i]= temp;
            num_cpy = num_cpy / 16;
        }
        j=i;
        for( i = 0; j > 0; j-- )
        {
            if (hex_num[i] != hex_num[j])
                break;
            i++;
        }
        if(j == 0)
        {
            for(j = i ;j> 0;j--)
                printf("%c",hex_num[j]);
            break;
        }
        else num++;
    }
    return 0;
}
