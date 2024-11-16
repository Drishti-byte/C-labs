/*program to print 3-digit armstrong numbers using functions*/
#include<stdio.h>
int armstrong(int n)
{
    int a,d,sum=0;
    a = n;
    while(n != 0)
    {
        d = n % 10;
        n = n / 10;
        sum = sum + d*d*d;
    }
    if(sum == a)
    printf("\n%d is an armstrong number",a);
    else
    printf("\n%d is not an armstrong number",a);
    return sum;
}
int main()
{
    int num;
    printf("Drishti Bansal 1-B");
    printf("\nEnter 3-digit number: ");
    scanf("%d",&num);
    armstrong(num);
    return 0;
}