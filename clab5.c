/*program to print question 5*/
#include<stdio.h>
int main()
{
    printf("Drishti Bansal 1-B");
    int n1,n2,n3,n4,n5,sum,average;
    printf("\nEnter n1:");
    scanf("%d",&n1);
    printf("\nEnter n2:");
    scanf("%d",&n2);
    printf("\nEnter n3:");
    scanf("%d",&n3);
    printf("\nEnter n4:");
    scanf("%d",&n4);
    printf("\nEnter n5:");
    scanf("%d",&n5);
    sum= n1+n2+n3+n4+n5;
    printf("\nSum is %d",sum);
    average=sum/5;
    printf("\nAverage is %d",average);
    return 0;
}