/*program to check wheather a string is palindrome or not*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[10] = "naman";
    int i, len, flag = 0;
    len = strlen(str);
    printf("Drishti Bansal 1-B");
    for (i = 0; i < len; i++) 
    {
        if (str[i] != str[len - i - 1]) 
        {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("\n%s is not palindrome", str);
    else
        printf("\n%s is palindrome", str);
    return 0;
}