/*program to print electricity charges based on consumption*/
#include<stdio.h>
int main()
{
    float charges,pay;
    printf("Drishti Bansal 1-B");
    printf("\nEnter charges: ");
    scanf("%f",&charges);
    if(charges >= 0 && charges <= 200)
    {
        pay = 0.50 * charges;
        printf("\n%f",pay);
    }
    else if(charges >= 201)
    {
        pay = 100 + 0.65 * charges;
        printf("\n%f",pay);
    }
    else if(charges >= 401)
    {
        pay = 230 + 0.80 * charges;
        printf("\n%f",pay);
    }
    else if(charges >= 601)
    {
        pay = 390 + 1 * charges;
        printf("\n%f",pay);
    }
    return 0;
}