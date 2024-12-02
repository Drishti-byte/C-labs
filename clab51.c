/*program to copy one string to another string*/
#include<stdio.h>
int main()
{
    char s1[1000];
    char s2[1000];
    printf("Drishti Bansal 1-B");
    printf("\nEnter any string: ");
    gets(s1);
    int i;
    for(i=0; s1[i] != '\0';i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("\nOriginal string s1 = '%s'\n",s1);
    printf("\nCopied string s2 = '%s'\n",s2);
    return 0;
}