#include <stdio.h>


void transpozir(int* matrix, int golemina)
{
    int i = 0, m;
    for(; i < golemina - 1; i++)
    {
        for(m = i + 1; m < golemina; m++)
        {
            matrix[golemina*i + m] += matrix[golemina*m + i];
            matrix[golemina*m + i] = matrix[golemina*i + m] - matrix[golemina*m + i];
            matrix[golemina*i + m] -= matrix[golemina*m + i];
        }
    }
}

int main()
{

    int size,i = 0, a = 0;
    scanf("%d",&size);
    int matrix[size][size];
    for(; i < size; i++)
    {
        for(a = 0; a < size; a++)
        {
            scanf("%d",&matrix[i][a]);
        }
    }
    transpozir((int*)matrix,size);
    for(i = 0; i < size; i++)
    {
        for(a = 0; a < size; a++)
        {
            printf(" %d ", matrix[i][a]);
        }
        printf("\n");
    }


    return 0;
}

