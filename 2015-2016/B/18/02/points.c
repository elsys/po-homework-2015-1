#include<stdio.h>

typedef struct{

    int x;
    int y;
    int z;

}coordinates;

coordinates point;

int main(){

    printf("Enter coordinates - x, y, z:\n");
    scanf("%d %d %d", &point.x, &point.y, &point.z);
    newCoordinates();
    printf("x = %d; y = %d; z = %d.\n", point.x, point.y, point.z);
    
}

int newCoordinates(){

    point.x++;
    point.y++;
    point.z++;

}


