/*program to find simple interest using a function*/
#include<stdio.h>
int si(int p,int r,int t)
{
    int si;
    si = p*r*t/100;
    return si;
}
int main()
{
    int a,b,c,res=0;
    printf("Drishti Bansal 1-B");
    printf("\nEnter p,r,t: ");
    scanf("%d %d %d",&a,&b,&c);
    res = si(a,b,c);
    printf("\nSimple Interest is %d",res);
    return 0;
}