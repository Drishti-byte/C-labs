/*program to print total bill amount*/
#include<stdio.h>
int main()
{
    int item_no,price,quantity,total,dis,net;
    printf("Drishti Bansal 1-B");
    printf("\nEnter item no, price and quantity: ");
    scanf("%d %d %d",&item_no,&price,&quantity);
    total= price* quantity;
    dis= total*10/100;
    net= total-dis;
    printf("\nTotal bill before discount is %d",total);
    printf("\nDiscount is %d",dis);
    printf("\nNet bill amount is %d",net);
    return 0;
}