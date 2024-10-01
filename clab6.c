/*program to print question 6*/
#include<stdio.h>
int main()
{
    printf("Drishti Bansal 1-B");
    float a,b,sum,diff,product,average;
    printf("\nEnter a:");
    scanf("%f",&a);
    printf("\nEnter b:");
    scanf("%f",&b);
    sum= a+b;
    diff= a-b;
    product= a*b;
    average= sum/2;
    printf("\nSum is %f",sum);
    printf("\nDifference is %f",diff);
    printf("\nProduct is %f",product);
    printf("\nAverage is %f",average);
    return 0;
}