#include <stdio.h>
int main()
{
    int no;
    printf("Enter month number :");
    scanf("%d",&no);
    switch(no)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:printf("Has 31 days.");break;
        case 4:
        case 6:
        case 9:printf("Has 30 days.");break;
        case 2:printf("Has 28 days.");break;
        default:printf("Invalid month.");
    }
}
