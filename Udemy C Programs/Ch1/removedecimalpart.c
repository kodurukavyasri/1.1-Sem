#include<stdio.h>
#include<stdlib.h>

//intake float from the user
//print the decimal part 

int main()
{
    float num;
    printf("Enter the Real number: \n");
    scanf("%f", &num);

    printf("The decimal part = %f\n", num - (int)num);

    return 0;
}