/*program to swap two numbers*/
#include<stdio.h>
int swap(int *a,int *b)
{
    int s;
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("\nAfter swap numbers are: %d %d",*a,*b);
    return s;
}
int main()
{
    int n1,n2,res=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&n1,&n2);
    printf("\nBefore swap numbers are: %d %d",n1,n2);
    swap(&n1,&n2);
    return 0;
}