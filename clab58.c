/*program to enter book records using structures*/
#include<stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
    float price;
};
int main()
{
    struct Book book[10];
    int i,n;
    printf("Drishti Bansal 1-B");
    printf("\nEnter the number of books:");
    scanf("%d",&n);
    for(i=0; i < n;i++)
    {
        printf("\nDetails of book %d:",i+1);
        printf("\nEnter ID:");
        scanf("%d",&book[i].id);
        printf("\nEnter Title:");
        scanf("%s",book[i].title);
        printf("\nEnter the name of the author:");
        scanf("%s",book[i].author);
        printf("\nEnter the price:");
        scanf("%f",&book[i].price);
    }
    for (i=0; i < n; i++)
    {
        printf("\nDetails of book %d:",i+1);
        printf("\nID: %d",book[i].id);
        printf("\nTitle: %s",book[i].title);
        printf("\nAuthor: %s",book[i].author);
        printf("\nPrice: %.2f",book[i].price);
    }
    return 0;
}