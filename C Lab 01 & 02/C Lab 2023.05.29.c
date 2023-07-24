#include<stdio.h>
int main()
{
    //Question (01)
    int num1,num2,max;
    printf("Enter first number :");
    scanf("%d" , &num1);
    printf("Enter second number :");
    scanf("%d" ,&num2 );
    max=num1;
    if(num1>num2)
    printf("%d is the highest number.\n" , num1);
    else
    printf("%d is the highest number.\n", num2);
    printf("\n\n");


    //Question(02)
    int num3,num4,num5;
    printf("Enter 3 numbers :");
    scanf("%d %d %d", &num3,&num4,&num5);

    if(num3>num4)
    printf("%d is the highest number.\n" , num3);
    else if(num4>num5)
    printf("%d is the highest number.\n" , num4);
    else
    printf("%d is the highest number.\n" , num5);

    if(num3<num4)
    printf("%d is the minimum number.\n" , num3);
    else if(num4<num5)
    printf("%d is the minimum number.\n" , num4);
    else
    printf("%d is the minimum number.\n" , num5);
    printf("\n\n");




    //Question (03)
    int x=10;
    float basic_salary , new_salary , increment ;
    char e_name[20];
    printf("Enter employee name :");
    scanf("%s" , &e_name);
    printf("Basic salary :");
    scanf("%f" ,&basic_salary);

    if(basic_salary>=5000)
        x;
    else if(basic_salary>=10000) //else if(basic_salary >= 500 && basic_salary<10000)
        x;
    else if(basic_salary>10000)
        x+=5;
    else
        x-=5;

    increment = (x* basic_salary)/100;
    new_salary=basic_salary + increment;
    printf("%s - basic salary is %.2f" ,e_name , new_salary );
    printf("\n\n");

    //Question (04)
    float r, d, c, a,x;//x - PI
    printf("Enter radius :");
    scanf("%f", &r);
    x=3.14159;
    d=2*r;
    c= 2*x*r;
    a=x*r*r;
    printf("Diameter is %.2f\n", d);
    printf("Circumference is %.2f\n", c);
    printf("Area is %.2f\n", a);
    printf("\n\n");

    //Question (05)
    int n1,n2;
    printf("Enter two numbers :");
    scanf("%d %d" ,&n1,&n2);
    if(n1%n2==0)
        printf("%d is the multiple of %d",n1,n2);
    else
        printf("%d is not the multiple of %d",n1,n2);
    printf("\n\n");


    //Question (07)
    char s_name[20],city;
    float year, additional_allowance,b_salary ,bonus ,t_monthly_salary;
    printf("Sales persons name :");
    scanf("%s" ,&s_name);
    additional_allowance = (10* b_salary)/100;
    if(year>5)
        printf("additional allowance is %.2f",additional_allowance);
    else
        printf("additional allowance is %.2f",additional_allowance);

    printf("CITY :");
    scanf("%c",&city);
    if(city == c)
        printf("additional allowance is Rs.2500/=");
    else
        printf("No additional allowance");




}
