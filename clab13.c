/*program to print circumference and area of circle*/
#include<stdio.h>
int main()
{
    float r,circum,area;
    printf("Drishti Bansal 1-B");
    printf("\nEnter radius: ");
    scanf("%f",&r);
    area= 3.14* r*r;
    circum= 2*3.14*r;
    printf("\nArea is %f",area);
    printf("\nCircumference is %f",circum);
    return 0;
}