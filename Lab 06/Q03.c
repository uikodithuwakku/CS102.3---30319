#include<stdio.h>
int main()
{
    int count,no,fact=1;
    printf("Enter a number :");
    scanf("%d",&no);
    if(no<0)
        printf("Error");
    else
    {
      for(count=1;count<=no;count++)
    {
        fact=fact*count;
    }
    }
        printf("Factorial = %d",fact);
}
