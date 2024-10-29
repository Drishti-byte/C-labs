/*program to print natural numbers till n and reverse counting from m to 1*/
#include<stdio.h>
int main()
{
    int m,n,i;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&n);
    i=1;
    while(i <= n)
    {
        printf("\n%d",i);
        i++;
    }
    printf("\nEnter a number: ");
    scanf("%d",&m);
    while(m != 0)
    {
        printf("\n%d",m);
        m--;
    }
    return 0;
}