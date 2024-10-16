/*program to print greatest of three numbers using conditional operator*/
#include<stdio.h>
int main()
{
    int a,b,c,greatest;
    printf("Drishti Bansal 1-B");
    printf("\nEnter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    greatest = (a>b)?((a>c)?a:c):(b>c)?b:c;
    printf("\nLargest number is %d",greatest);
    return 0;
}