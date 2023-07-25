#include<stdio.h>
int main()
{
    char city;
    float b_salary,service_years,m_sales,a_allowance01,a_allowance02,bonus,g_remuneration ;
    printf("Enter the basic salary:");
    scanf("%f",&b_salary);
    printf("service years:");
    scanf("%f",&service_years);
    printf("Enter the city:");
    scanf("%s",&city);
    printf("Enter the monthly sales:");
    scanf("%f",&m_sales);
    if(m_sales>=50000)
    {
     bonus = 0.15* m_sales;
    }
    else if (m_sales<=25000)
    {
     bonus = 0.1* m_sales;
    }
    else
    {
     bonus = 0.12* m_sales;
    }
    switch(city)
    {
        case'c':a_allowance01 = 2500;break;
        default:a_allowance01 = 0;
    }
    service_years=5;
    if(service_years>5)
    {
      a_allowance02 = 0.1*b_salary;
    }
    g_remuneration = b_salary + a_allowance01 + a_allowance01+ bonus;
    printf("gross remuneration : %.2f" ,g_remuneration);
}
