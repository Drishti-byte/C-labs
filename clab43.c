/*program to print the sum of n elements of array & show the average*/
#include<stdio.h>
int main()
{
    int i,a[7],sum=0,n,average;
    printf("Drishti Bansal 1-B");
    printf("\nHow many numbers are there: ");
    scanf("%d",&n);
    printf("\nEnter the numbers");
    for(i=0; i < n; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nThe numbers entered are:");
    for(i=0;i < n; i++)
    {
        printf("\n%d",a[i]);
        sum = sum + a[i];
    }
    printf("\nSum is %d",sum);
    average = sum /n;
    printf("\nAverage is %d",average);
    return 0;
}