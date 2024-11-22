/*program to find maximum and minimum integer in an array using functions*/
#include<stdio.h>
int main()
{
    int arr[]={100,50,30,70,80,60,80,90,40};
    int n=sizeof(arr[0]),i;
    int min,max;
    min=arr[0];
    max=arr[0];
    printf("Drishti Bansal 1-B");
    for(i=1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min=arr[i];
        }
        if(arr[i] > max)
        {
            max=arr[i];
        }
    }
    printf("\nMininmum result is %d",min);
    printf("\nMaximum result is %d",max);
    return 0;
}