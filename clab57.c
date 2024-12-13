/*program to declare an array of pointers, read values and print them*/
#include<stdio.h>
int main()
{
    int size,i;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    int *p = arr;
    printf("\nEnter the elements:");
    for(i=0; i < size;i++)
    {
        scanf("%d",p+i);
    }
    printf("\nThe elements entered are:");
    for(i=0; i < size;i++)
    {
        printf("\n%d",*(p+i));
    }
    printf("\n");
    return 0;
}