/*program to enter employee salary records, using structures. Create array of structures*/
#include<stdio.h>
struct emp
{
    int id;
    char name[20];
    int salary;
};
int main()
{
    int i,n;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the no. of employees:");
    scanf("%d",&n);
    struct emp l[n];
    for(i=0; i < n;i++)
    {
        printf("\nEnter id of the employee:");
        scanf("%d",&l[i].id);
        printf("\nEnter the name of the employee:");
        scanf("%s",&l[i].name);
        printf("\nEnter the salary of the employee:");
        scanf("%d",&l[i].salary);
    }
    printf("\nDetails of employees are:");
    for(i=0; i < n;i++)
    {
        printf("\nEmployee ID: %d",l[i].id);
        printf("\nEmployee Name: %s",l[i].name);
        printf("\nEmployee Salary: %d",l[i].salary);
    }
    return 0;
}