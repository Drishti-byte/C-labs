/*program to print sum of first n odd numbers*/
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&n);
    for(i=1;i <= n; i += 2)
    {
        printf("\n%d",i);
        sum = sum +i;
    }
    printf("\nSum of %d odd numbers is %d",n,sum);
    return 0;
}