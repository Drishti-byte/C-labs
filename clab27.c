/*program to print multiplication tables using nested do-while loops*/
#include<stdio.h>
int main()
{
    int num,i,p=1;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a number: ");
    scanf("%d",&num);
    i=1;
    do
    {
        p = num * i;
        printf("\n%d X %d= %d",num,i,p);
        i++;
    } while (i <= 10);
    return 0;
}