#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    int i = 1;

    printf("Enter the number : ");
    scanf ("%d",&num);

    while (i<=num)
    {
        printf("%d",i);
        i++;
    }

    printf("\n");
    for (i = num; i>=1, i--;)
    {
        printf("%d",i);
    }

    printf("\n");

    return 0;

}