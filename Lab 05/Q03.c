#include <stdio.h>
int main()
{
    char ch;
    const float PI=3.14159;
    float r,A,C,V ;
    printf(" C-circumference of a circle\n A-area of a circle\n V-volume of a sphere\n");
    printf("Choose a type: ");
    scanf("%s",&ch);
    printf("Enter radius:");
    scanf("%f",&r);

    switch(ch)
    {
        case 'A':printf("Area of a circle - %.2f", A , A=PI*r*r);break;
        case 'C':printf("Circumference of a circle - %.2f", C , C=2*PI*r);break;
        case 'V':printf("Volume of a sphere- %.2f" , V , V=(4*PI*r*r*r)/3);break;
        default:printf("Invalid value");
    }



      /*int choice;
      float r,PI=3.14159;
      printf("Press 1 to find Area of a circle or press 2 to find Circumference of a circle :");
      scanf("%d",&choice);
      printf("Enter the radius :");
      scanf("%f",&r);
      if(choice==1)
      {
      printf("Area of a circle - %.2f",PI*r*r);
      }
      else if(choice==2)
      {
      printf("Circumference of a circle - %.2f",2*PI*r);
      }
      else
      {
      printf("Volume of a sphere- %.2f" ,(4*PI*r*r*r)/3);
      }*/
}


