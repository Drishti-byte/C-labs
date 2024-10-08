/*program to print area and perimeter of rectangle*/
#include<stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Drishti Bansal 1-B");
    printf("\nEnter length and breadth: ");
    scanf("%d %d",&l,&b);
    perimeter= 2*(l+b);
    area= l*b;
    printf("\nArea is %d",area);
    printf("\nPerimeter is %d",perimeter);
    return 0;
}