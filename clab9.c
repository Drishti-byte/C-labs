/*program to print swapping of two numbers using third variable*/
#include<stdio.h>
int main()
{
    int a,b,c=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nValues of a,b,c before swapping are: %d %d %d",a,b,c);
    c=a;
    a=b;
    b=c;
    printf("\nValues of a,b,c after swapping are: %d %d %d",a,b,c);
    return 0;
}