/*program to print fibonaaci series using recursion*/
#include<stdio.h>

void fibonacci(int n)
{
    static int n1=0,n2=1,n3;
    if(n > 0)
    {
        n3 = n1 +n2;
        n1 = n2;
        n2 = n3;
        printf("\n%d",n3);
        fibonacci(n-1);
    }
}
int main()
{
    int n;
    printf("Drishti Bansal 1-B");
    printf("\nHow many no. of elements are there: ");
    scanf("%d",&n);
    printf("\n0 \n1");
    fibonacci(n-2);
    return 0;
}