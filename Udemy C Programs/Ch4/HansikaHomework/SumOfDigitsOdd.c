#include<stdio.h>
#include<stdlib.h>
//A Program that takes sum of only odd digits

int main()
{
    int num,rem,posi,sum;
    printf("Enter the integer :");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        if (posi%2==0)
            sum=+rem;

        num=num/10;
        posi++;
    }
    printf("The sum of the digits at odd places is %d\n",sum);
    prntf("Thank you for choosing this program");

    return 0;
}