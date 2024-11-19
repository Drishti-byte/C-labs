/*program to check wheather a number is odd or even using functions*/
#include<stdio.h>
int check(int n)
{
    if(n % 2 == 0)
    {
        printf("\n%d is even",n);
    }
    else
    printf("\n%d is odd",n);
    return n;
}
int main()
{
    int num;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&num);
    check(num);
    return 0;
}