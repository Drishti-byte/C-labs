/*program to perform matrix operations:Addition,Subtraction,Multiplication & Transpose*/
#include<stdio.h>
#include<stdlib.h>
void add(int m[3][3],int n[3][3],int sum[3][3])
{
    int i,j;
    for(i=0; i < 3;i++)
    for(j=0; j <3;j++)
    sum[i][j] = m[i][j] + n[i][j];
}
void subtract(int m[3][3],int n[3][3],int result[3][3])
{
    int i,j;
    for(i=0; i < 3;i++)
    for(j=0; j < 3; j++)
    result[i][j] = m[i][j] - n[i][j];
}
void multiply(int m[3][3],int n[3][3],int result[3][3])
{
    int i,j,k;
    for(i=0; i <3;i++)
    {
       for(j=0; j < 3;j++)
       {
           result[i][j] = 0;
           for(k=0; k < 3; k++)
           result[i][j] += m[i][k]*n[k][j];
       }
    }
}
void transpose(int matrix[3][3],int trans[3][3])
{
    int i,j;
    for(i=0; i < 3; i++)
    for(j=0; j < 3;j++)
    trans[i][j] = matrix[i][j];
}
void display(int matrix[3][3])
{
    int i,j;
    for(i=0; i < 3; i++)
    {
        for(j=0; j < 3;j++)
        printf("%d \t",matrix[i][j]);
        printf("\n");
    }
}
int main()
{
    int choice;
    int a[][3] = {{5,6,7},{8,9,10},{3,1,2}};
    int b[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3];
    printf("Drishti Bansal 1-B\n");
    printf("First Matrix:\n");
    display(a);
    printf("\nSecond Matrix:\n");
    display(b);
    do
    {
        printf("\nChoose the matrix operation:");
        printf("\n1.Addition");
        printf("\t2.Subtraction");
        printf("\t3.Multiplication");
        printf("\t4.Transpose");
        printf("\t5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            add(a,b,c);
            printf("Sum of matrix: \n");
            display(c);
            break;
            case 2:
            subtract(a,b,c);
            printf("Difference of matrix: \n");
            display(c);
            break;
            case 3:
            multiply(a,b,c);
            printf("Product of matrix: \n");
            display(c);
            break;
            case 4:
            printf("Transpose of first matrix: \n");
            transpose(a,c);
            display(c);
            printf("Transpose of second matrix: \n");
            transpose(b,c);
            display(c);
            break;
            case 5:
            printf("Thank You\n");
            break;
            default:
            printf("Invalid option\n");
        }
    }while(1);
    return 0;
}