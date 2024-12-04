/*program to show the use of string function: strcpy(), strcat(), strcmp(), strlen()*/
#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "Hello World";
    int len = strlen(str);
    printf("Drishti Bansal 1-B");
    printf("\n----------------------------------------");
    printf("\nUsing strlen function");
    printf("\nThe length of string is: %d",len);
    printf("\n----------------------------------------");
    printf("\nUsing strcpy function");
    char dest[20];
    strcpy(dest,str);
    printf("\nThe copied string is %s",dest);
    printf("\n----------------------------------------");
    printf("\nUsing strcat function");
    char str1[] = "Hello ";
    char str2[] = "World";
    strcat(str1,str2);
    printf("\nThe concatenated string is %s",str1);
    printf("\n----------------------------------------");
    printf("\nUsing strcmp function");
    if(str1 == str2)
    printf("\nStrings are same");
    else 
    printf("\nStrings are not same");
    return 0;
}