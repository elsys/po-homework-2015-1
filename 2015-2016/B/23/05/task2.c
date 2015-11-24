#include <stdio.h>

int cells, cell[20], oldcell[20], AliveCells = 0, DeadCells = 0, i = 1, generations = 1;
void next_generation(int current, int next, int length)
{
    while(generations < 1000) //Creating the new generations
    {
        if(cell[i - 1] != cell[i + 1])
        {
            cell[i] = 1;
            AliveCells++;
            printf("* ");
        }
        if(cell[i - 1] == cell[i + 1])
        {
            cell[i] = 0;
            DeadCells++;
            printf(". ");
        }
        if(AliveCells == cells) break;
        if(DeadCells == cells) break;
        if(i == cells)
        {
            i = 0;
            generations++;
            AliveCells = 0;
            DeadCells = 0;
            printf("\n");
        }
        i++;
    }
}

int main()
{
    printf("Amount of cells:");
    scanf("%d",&cells);
    while(cells < 1 || cells > 20) //Check for correct amount of cells
    {
        printf("Invalid amount of cells.");
        if(cells < 1) printf("The minimum amount of cells is 1.\n");
        else if(cells > 20) printf("The maximum amount of cells is 20.\n");
        printf("Amount of cells:");
        scanf("%d",&cells);
    }
    while(i <= cells) //Inputing the cells
    {
        printf("Cell %d:",i);
        scanf("%d",&cell[i]);
        i++;
    }
    if(i == cells + 1) //First and last cell are 0 always
    {
        cell[0] = 0;
        cell[i] = 0;
    }
    i = 1;
    next_generation(cell[i], oldcell[i], cells);
    printf("\nCreated %d generations.", generations);
    return 0;
}