/*program to compute x^n using while statement*/
#include<stdio.h>
int main()
{
    int base,exponent,result = 1,e;
    printf("Drishti Bansal 1-B");
    printf("\nEnter base and exponent of a number: ");
    scanf("%d %d",&base,&exponent);
    e= exponent;
    while(exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    printf("\n%d to the power %d = %d",base,e,result);
    return 0;
}