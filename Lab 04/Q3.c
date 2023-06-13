#include <stdio.h>
int main()
{
    int r;
    char ch;
    const float PI=3.14159;
    float A,C, V ;
    printf(" C-circumference of a circle\n A-area of a circle\n V-volume of a sphere\n");
    printf("Choose a type: ");
    scanf("%s",&ch);
    printf("Enter radius:");
    scanf("%d",&r);

    switch(ch)
    {
        case 'A':printf("Area of a circle - %.2f", A , A=PI*r*r);break;
        case 'C':printf("Circumference of a circle - %.2f", C , C=2*PI*r);break;
        case 'V':printf("Volume of a sphere- %.2f" , V , V=(4*PI*r*r*r)/3);break;
        default:printf("Invalid value");
    }



}

