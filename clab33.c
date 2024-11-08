/*program to implement a function printline (int ch,int n) to print ch n times*/
#include<stdio.h>
void character(int ch,int n)
{
    int i;
    for(i=1; i <= n; i++)
    {
        printf("\nch");
    }
}
int main()
{
    int c,n;
    printf("Drishti Bansal 1-B");
    printf("\nHow many times you want to print ch: ");
    scanf("%d",&n);
    character(c,n);
    return 0;
}