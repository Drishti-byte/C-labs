/*program to compare and concatenate two strings*/
#include<stdio.h>
int compare(char[],char[]);
#include<string.h>
int main()
{
    char string1[1000],string2[1000];
    int i,j;
    printf("Drishti Bansal 1-B");
    printf("\nEnter string number 1:");
    gets(string1);
    printf("\nEnter string number 2:");
    gets(string2);
    j = strlen(string1);
    for(i=0; string2[i] != '\0';i++)
    {
        string1[i+j] = string2[i];
    }
    string1[i+j] = '\0';
    printf("\nCombined two strings = '%s'\n",string1);
    printf("\nComparing two strings");
    int c = compare(string1,string2);
    if(c == 0)
    printf("\nStrings are same");
    else
    printf("\nStrings are not same");
    return 0;
}
int compare(char a[],char b[])
{
    int flag=0,i=0;
    while(a[i] != '\0' && b[i] != '\0')
    {
        if(a[i] != b[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    return 0;
    else 
    return 1;
}