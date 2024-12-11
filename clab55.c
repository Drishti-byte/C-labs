/*program using pointers to read array elements and find their sum*/
#include<stdio.h>
int main()
{
    int arr[5],*ptr,sum=0,i;
    printf("Drishti Bansal 1-B");
    printf("\nEnter 5 elements:");
    for(i=0;i < 5;i++)
    {
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0; i < 5; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("\nSum of array elements: %d",sum);
    return 0;
}