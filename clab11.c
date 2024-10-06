/*program to print units of time*/
#include<stdio.h>
int main()
{
    int hours,seconds,minutes;
    printf("Drishti Bansal 1-B");
    printf("\nEnter time in hours: ");
    scanf("%d",&hours);
    hours= hours*3600;
    printf("\nTime in seconds is %d",hours);
    printf("\nEnter time in hours: ");
    scanf("%d",&hours);
    hours *= 60;
    printf("\nTime in minutes is %d",hours);
    printf("\nEnter time in minutes: ");
    scanf("%d",&minutes);
    minutes *= 60;
    printf("\nTime in seconds: %d",minutes);
    return 0;
}