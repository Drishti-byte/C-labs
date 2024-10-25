/*program to print grades on the basis of marks*/
#include<stdio.h>
int main()
{
    int marks;
    printf("Drishti Bansal 1-B");
    printf("\nEnter marks: ");
    scanf("%d",&marks);
    if(marks >= 80 && marks <= 100)
    printf("\nHonours");
    else if(marks >= 60)
    printf("\nFirst Division");
    else if(marks >= 50)
    printf("\nSecond Division");
    else if(marks >= 40)
    printf("\nThird Division");
    else 
    printf("\nFail");
    return 0;
}