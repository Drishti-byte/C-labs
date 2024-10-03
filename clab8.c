/*program to convert temperature from celcius to farenheit and vise versa*/
#include<stdio.h>
int main()
{
    printf("Drishti Bansal 1-B");
    float C,F;
    printf("\nEnter the temperature in fahrenheit:");
    scanf("%f",&F);
    C= (F-32)/(9/5.0);
    printf("\nTempertaure in Celsius is %f",C);
    printf("\nEnter temperature in Celcius:");
    scanf("%f",&C);
    F= (C*9/5.0)+32;
    printf("\nTemperature in celcius is %f",F);
    return 0;
}