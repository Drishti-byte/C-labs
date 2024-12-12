/*program to find length of strings using pointers*/
#include<stdio.h>
int len(char string)
{
    int len = 0;
    while(string != '\0')
    {
        len++;
        string++;
    }
}
int main()
{
    char string1[]= "Drishti Bansal";
    printf("Drishti Bansal 1-B");
    printf("\nLength of string: %d",len(string1));
    return 0;
}