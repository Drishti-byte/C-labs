/*program to apply mathematical operation on one character to get another character*/
#include<stdio.h>
int main()
{
    char n1,n2,sum,diff,product,quo;
    printf("Drishti Bansal 1-B");
    printf("\nEnter two characters: ");
    scanf("%c %c",&n1,&n2);
    sum= n1+n2;
    diff= n1-n2;
    product= n1* n2;
    quo= n2/n1;
    printf("\nSum is %c",'sum');
    printf("\nDiff is %c",'diff');
    printf("\nProduct is %c",'product');
    printf("\nQuotient is %c",'quo');
    return 0;
}