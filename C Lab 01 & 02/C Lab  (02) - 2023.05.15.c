
#include <stdio.h>
int main()
{

//(Q.1)Display your name
    printf("Udani Indrachapa Kodithuwakku\n");
    printf("\n");

//(Q.2)Display name , batch & age
    printf("Udani Indrachapa Kodithuwakku\n");
    printf("23.1\n");
    printf("21 Years old\n");
    printf("\n");

//(Q.3) Display name , batch & age using one printf statement
    printf("Udani Indrachapa Kodithuwakku\n23.1\n21 Years old\n");
    printf("\n");

//(Q.4)
    printf("*\n");
    printf("**\n");
    printf("***\n");
    printf("****\n");
    printf("*****\n");

    printf("\n");

//(Q.5) Display the above patten using one printf.
    printf("*\n**\n***\n****\n*****\n");

    printf("\n");

//(Q.6) /n , /t , /a
    printf("Hello\nHello\n");
    printf("\n");
    printf("Hello\tHello\t");
    printf("\n\n");
    printf("Hello\aHello\a");
    printf("\n\n");

//(Q.7) comment lines
    printf("This is a single line comment - //single comment line\n");
    printf("\n");
    printf("This is a multiline comment - /*multiline comment*/");
    printf("\n\n");

//(Q.8) Code to get a user value
    int num;
    printf("Enter a number :");
    scanf("%d", &num);
    printf("Value is %d.", num);
    printf("\n\n");

//(Q.9) Input the first letter of your name,birth year and display your name with age
    int B_Year , Age;
    char First_letter;
    printf("First letter of your name :");
    scanf("%s", &First_letter);
    printf("Enter your Birth year :");
    scanf("%d", &B_Year);
    Age = 2023 - B_Year;
    printf("%c is %d years old." , First_letter, Age);

}
