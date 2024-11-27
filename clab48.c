/*program to read character array using getchar() & find the length and the no. of vowels*/
#include<stdio.h>
#include<ctype.h>
int main()
{
    char data[50],ch;
    int len,vowels=0,i=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the characters:");
    do
    {
        ch = getchar();
        data[i]=ch;
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vowels++;
            }
            i--;
    }while(ch != '\n');
    printf("\nThe length is %d",len);
    printf("\nNo. of Vowels are %d",vowels);
    return 0;
}