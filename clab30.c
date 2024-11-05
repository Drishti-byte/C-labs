/*program to check wheather a number is prime or composite*/
#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&num);
    printf("\nFators of %d are: ",num);
    for(i=1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("\n%d",i);
            count++;
        }
    }
    if(count == 2)
    printf("\nNumber is prime");
    else 
    printf("\nNumber is composite");
    return 0;
}