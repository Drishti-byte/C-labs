/*program to print maximum of two numbers using if else statement*/
#include<stdio.h>
int main()
{
    int a,b,greatest;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a > b)
    printf("\n%d is the greatest",a);
    else 
    printf("\n%d is the greatest",b);
    return 0;
}