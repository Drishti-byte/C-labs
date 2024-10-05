/*program to print swapping of two numbers*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nValues of a and b before swapping are: %d %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValues of a and b after swapping are: %d %d",a,b);
    return 0;
}