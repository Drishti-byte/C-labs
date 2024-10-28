/*program to print nature of the roots*/
#include<stdio.h>
int main()
{
    int a,b,c;
    float d;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the coefficients of quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    d = b*b+4*a*c;

    if(d > 0)
    printf("\nUnequal real roots");
    else if(d < 0)
    printf("\nNo real roots");
    else 
    printf("\nEqual real roots");
    return 0;
}