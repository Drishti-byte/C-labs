/*program to get result of operator on two integers*/
#include<stdio.h>
int main()
{
    int a,b,op;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nWhich operation would you like to perform ?");
    printf("\n1-Add,2-Subtract,3-Mutiply,4-Divide,5-Modulus");
    scanf("\n%d",&op);

    switch(op)
    {
        case 1:
        a+b;
        printf("\nSum is %d",a+b);
        break;
        case 2: 
        a-b;
        printf("\nDifference is %d",a-b);
        break;
        case 3:
        a*b;
        printf("\nProduct is %d",a*b);
        break;
        case 4:
        a/b;
        printf("\nQuotient is %d",a/b);
        break;
        case 5:
        a%b;
        printf("\nRemainder is %d",a%b);
        break;
    }
    return 0;
}