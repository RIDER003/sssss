#include<stdio.h>
int main()
{
    //TODO
    // declare three variables of integer type
    int num1, num2, num3;
    // declare a variable of character type
    char ch;
    // declare two variable of float type
    float nmbr1, nmbr2;
    // declare three variable of type integer for hour, minute, second
    int hr, min, sec;
    
    // use formatted input/output function to read input and display output
    printf("Enter three integer numbers(num1, num2, num3): ");
    scanf("%d, %d, %d", &num1, &num2, &num3);
    // use '-' flag, field width = 15 for one integer variable
    printf("%-15d\n", num1);
    // use '0' flag, field width = 15 for second integer variable
    printf("%015d\n", num2);
    // use '#' flag for third integer variable with hex and octal output
    printf("%#o\n%#x\n", num3, num3);

    // read a character from user and store in character variable using formatted I/O function
    printf("Enter a charcter: ");
    scanf("%*c %c", &ch);
    printf("%c\n", ch);
    // print one float variable with field width = 15
    printf("Enter first float number: ");
    scanf("%f", &nmbr1);
    printf("%15f\n", nmbr1);
    // print second float variable with .precision (precision = 2)
    printf("Enter second float variable with precision (precision = 2): ");
    scanf("%f", &nmbr2);
    printf("%.2f\n", nmbr2);

    // read and store hour, minute, second using ordinary character (:) in pattern
    printf("Enter time in 24 hour format (hour:min:sec): ");
    scanf("%d:%d:%d", &hr, &min, &sec);
    printf("TIME: %d:%d:%d", hr, min, sec);

    return 0;
}