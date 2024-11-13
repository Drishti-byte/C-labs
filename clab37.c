/*program to print factorial of a number using recursion*/
#include<stdio.h>
int factorial(int n)
{
    if(n == 0)
    return 1;
    return n*factorial(n-1);
}
int main()
{
    int num=5;
    printf("Drishti Bansal 1-B");
    printf("\nFactorial of %d is %d",num,factorial(num));
    return 0;
}