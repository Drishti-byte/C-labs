/*program to print maximum of three numbers using nested if else statements*/
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Drishti Bansal 1-B");
    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a > b && a > c)
    printf("\n%d is the greatest",a);
    else if(b > a && b > c)
    printf("\n%d is the greatest",b);
    else 
    printf("\n%d is the greatest",c);
    return 0;
}