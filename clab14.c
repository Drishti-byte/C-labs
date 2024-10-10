/*program to mathematical operation on character variables*/
#include<stdio.h>
int main()
{
    char n1,n2;
    int sum,diff,product,quo;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two characters: ");
    scanf("%c %c",&n1,&n2);
    sum= n1+n2;
    diff= n1-n2;
    product= n1* n2;
    quo= n2/n1;
    printf("\nSum is %d",sum);
    printf("\nDiff is %d",diff);
    printf("\nProduct is %d",product);
    printf("\nQuotient is %d",quo);
    return 0;
}