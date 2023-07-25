#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter 2 numbers :");
    scanf("%d %d",&n1 ,&n2);
    if(n1%n2==0)
    {
     printf("%d is the multiple of %d",n1,n2);
    }
    else
    {
     printf("%d is not a multiple of %d",n1,n2);
    }
}
