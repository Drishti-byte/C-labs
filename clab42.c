/*program to check wheather the number is palindrome number or not*/
#include<stdio.h>
int palindrome(int n)
{
    int rev=0,d,a;
    a = n;
    while(n != 0)
    {
        d = n % 10;
        n = n / 10;
        rev = rev * 10 +d;
    }
    if(rev == a)
    printf("\n%d is a palindrome number",a);
    else 
    printf("\n%d is not a palindrome number",a);
    return rev;
}
int main()
{
    int num;
    printf("Drishti Bansal 1-B");
    printf("\nEnter a five digit number: ");
    scanf("%d",&num);
    palindrome(num);
    return 0;
}