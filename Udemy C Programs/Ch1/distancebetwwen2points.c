#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x1,y1,x2,y2;
    float distance;

    printf("Enter the first point x1:");
    scanf("%f",&x1);

    printf("Enter the first point y1:");
    scanf("%f",&y1);
    
    printf("Enter the first point x2:");
    scanf("%f",&x2);

    printf("Enter the first point y2:");
    scanf("%f",&y2);

    distance = sqrt ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    printf("The distance between 2 points is %2f\n", distance);


    return 0;
}