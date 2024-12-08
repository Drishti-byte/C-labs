/*program to print pointer values and their addresses*/
#include<stdio.h>
int main()
{
    int i,*in;
    float f,*fl;
    char c,*ch;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a character:");
    scanf("%c",&c);
    printf("\nEnter an integer:");
    scanf("%d",&i);
    printf("\nEnter a number:");
    scanf("%f",&f);
    ch = &c;
    in = &i;
    fl = &f;
    printf("\nAddress of ch:%u",ch);
    printf("\nAddress of in:%u",in);
    printf("\nAddress of fl:%u",fl);
    printf("\nValue of ch:%c",*ch);
    printf("\nValue of in:%d",*in);
    printf("\nValue of fl:%f",*fl);
    return 0;
}