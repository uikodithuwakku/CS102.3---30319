#include <stdio.h>
int main()
{
   int count=1,no,total=0;
   float avg;

   while(count<=10)
   {
       printf("Enter %d number :",count);
       scanf("%d",&no);
       total=total+no;
       count++;
   }

   avg=(float)total/10;
   printf("Total is %d\n",total);
   printf("Average is %.2f\n",avg);

   if(avg<50)
   {
    printf("Fail!");
   }
    else
    {
    printf("Pass!");
    }
}
