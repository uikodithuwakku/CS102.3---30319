#include <stdio.h>
int main()
{
   int no,total=0,mod;
   printf("Enter a number :");
   scanf("%d",&no);
   while(no!=0)
   {
       mod = no%10;
       total+=mod;
       no/=10;
   }
   printf("Total is %d",total);
}
