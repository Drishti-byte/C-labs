/*program to print factorial of a number using functions*/
#include<stdio.h>
int factorial(int num)
{
    int i,fact=1;
    for(i=num; i >=1;i--)
    {
        fact = fact * i;
    }
    return fact;
}
int main()
{
    int n,res;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&n);
    res = factorial(n);
    printf("\nFactorial of %d is %d",n,res);
    return 0;
}