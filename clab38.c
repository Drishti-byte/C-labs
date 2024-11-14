/*program to display the usage of static variables*/
#include <stdio.h>
int fun()
{
    static int count=0;
    count++;
    return count;
}
int main()
{
    printf("Drishti Bansal 1-B");
    printf("\n%d",fun());
    printf("\n%d",fun());
    return 0;
}