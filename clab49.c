/*program to find reverse of a string*/
#include <stdio.h>
#include <string.h>
int main()
{
   char string[20],temp;
   int i,length;
   printf("Drishti Bansal 1-B");
   printf("\nEnter String : ");
   scanf("%s",string);
   length = strlen(string)-1;
   for(i=0;i < strlen(string)/2;i++)
   {
      temp=string[i];
      string[i]=string[length];
      string[length--]=temp;
   }
   printf("Reverse string :%s",string);
   return 0;
}