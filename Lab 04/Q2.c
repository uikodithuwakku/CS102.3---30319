#include<stdio.h>
int main()
{
    int n1,n2,opt,add,sub,mul;
    float div;
    printf("Enter two numbers :");
    scanf("%d %d",&n1 ,&n2);
    printf(" 1-addition\n 2-subtraction\n 3-multiplication\n 4-division\n  ");
    printf("select the operator :");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:printf("Addition is %d",add,add=n1+n2);break;
        case 2:printf("Subtraction IS %d",sub,sub=n1-n2);break;
        case 3:printf("Multiplication is %d",mul,mul=n1*n2);break;
        case 4:printf("Division is %.2f",div=n1/n2);break;
        default:printf("Invalid operator.");
    }
}
