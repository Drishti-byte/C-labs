/*program to implement linear search using loop*/
#include<stdio.h>
int main()
{
    int arr[]={10,50,30,70,80,60,20,90,40};
    int n=sizeof(arr[0]),flag=0,i;
    int key=30;
    printf("Drishti Bansal 1-B");
    for(i=0; i < n; i++)
    {
        printf("\n%d",arr[i]);
        if(arr[i] == key)
        {
            flag=1;
            break;
        }
    }
    if(flag == 1)
    printf("\nKey found at index: %d",i);
    else 
    printf("\nKey not found");
    return 0;
}