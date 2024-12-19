/*program to define structure stores & a function update() to change the value of its members*/
#include<stdio.h>
typedef struct
{
    char name[10];
    float price;
    int quantity;
}stores;
stores update(stores *book,float p,int q)
{
    book->price+=p;
    book->quantity+=q;
    return(*book);
}
int main()
{
    stores lib={"Memories",1000,30};
    int q;
    float p;
    printf("\nDrishti Bansal 1-B");
    printf("\nEnter the increase/decreased quantity of book:");
    scanf("%d",&q);
    printf("\nEnter the increase/decreased price book:");
    scanf("%f",&p);
    lib = update(&lib,p,q);
    printf("\nBook Name = %s \nBook Price= %.2f \nBook quantity= %d",lib.name,lib.price,lib.quantity);
    return 0;    
}