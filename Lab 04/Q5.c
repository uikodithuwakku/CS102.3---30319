#include <stdio.h>
int main()
{
    int m_no;
    printf("Enter a month number:");
    scanf("%d",&m_no);
    switch(m_no)
    {
        case 1:printf("Has 31 days");break;
        case 2:printf("Has 28 days");break;
        case 3:printf("Has 31 days");break;
        case 5:printf("Has 31 days");break;
        case 7:printf("Has 31 days");break;
        case 9:printf("Has 31 days");break;
        case 11:printf("Has 31 days");break;
        default:printf("Has 30 days");break;
    }
}
