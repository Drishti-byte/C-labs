/*program to print sum of series like 1+1/2+.......1/n*/
#include<stdio.h>
int main()
{
    int i,num,sum=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&num);
    printf("\n1+");
    for(i=2; i <= num-1; i++)
    {
        printf("\n1/%d+",i);
    }
    for(i=1; i <= num; i++)
    {
        sum = sum +i;
    }
    printf("\n1/%d",num);
    printf("\nSum = 1/%d",sum+1/num);
    return 0;
}