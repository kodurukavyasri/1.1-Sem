#include <stdio.h>
#include <stdlib.h>

// 1 hr = 3600s
// 1 min = 60s
// remaining seconds


int main()
{
    int hours, minutes,seconds,sec;

    printf ("Enter the seconds :");
    scanf ("%d", &sec);

    hours = (sec/3600);

    minutes = (sec -(3600*hours))/60;

    seconds = sec -(3600*hours) - (minutes*60);

    printf("The converted time in HH:MM:SS format is = %d:%d:%d\n",hours, minutes, seconds);
    
    return 0;

}