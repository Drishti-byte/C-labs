/*program to print sum of digits using while & reverse of n-digit number using do-while*/
#include<stdio.h>
int main()
{
    int num,sum=0,d,rev=0,a;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the number: ");
    scanf("%d",&num);
    a=num;
    while(num != 0)
    {
        d= num % 10;
        num = num / 10;
        sum = sum+d;
    }
    printf("\nSum of %d is %d",a,sum);
    printf("\nEnter a number: ");
    scanf("%d",&num);
    a=num;
    do
    {
        d= num % 10;
        num = num / 10;
        rev = rev * 10 +d;
    } while (num != 0);
    printf("\nReverse of %d is %d",a,rev);
    return 0;
}