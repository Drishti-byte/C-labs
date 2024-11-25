/*program to generate reverse array for a given array*/
#include<stdio.h>
int main()
{
    int i,n,a[5],rev;
    printf("Drishti Bansal 1-B");
    printf("\nHow many numbers are there:");
    scanf("%d",&n);
    printf("\nEnter the numbers");
    for(i=0; i < n; i++)
    {
        printf("\nEnter number %d: ",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nNumbers entered by the user are:");
    for(i=0; i < n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nReverse of numbers are:");
    for(i=n; i >= 0; i--)
    {
        printf("\n%d",a[i]);
    }
    return 0;
}