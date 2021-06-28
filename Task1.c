#include<stdio.h>
int main(){
    //TODO
    // declare three variables of integer type
    // declare a variable of character type
    // declare two variable of float type
    // declare three variable of type integer for hour, minute, second
    
    // use formatted input/output function to read input and display output
    // use '-' flag, field width = 15 for one integer variable
    // use '0' flag, field width = 15 for second integer variable
    // use '#' flag for third integer variable with hex and octal output

    // read a character from user and store in character variable using formatted I/O function
    // print one float variable with field width = 15
    // print second float variable with .precision (precision = 2)

    // read and store hour, minute, second using ordinary character (:) in pattern
   
	
    int num1;
	int num2;
	int num3;
	
	printf("Three integer number");
	printf("%-15d\n", num1);
	printf("%015d\n", num2);
    printf("%#o\n%#x\n", num3, num3);
	scanf("%d%d%d", &num1, &num2, num3);
	
	char ch;
	
	printf("Input the character");
	printf("%c\n", ch);
	scanf("%c", &ch);
	
	float f1;
	float f2;
	
	printf("Input float number");
	printf("%15f\n", &f1);
	printf("%.2f\n", &f2);
	scanf("%f%f", &f1, &f2);

    int hr;
    int min;
    int sec;
    
    printf("Input the time format");
    printf(" %d:%d:%d:", hr, min, sec);
    scanf("%d:%d:%d", &hr, &min, &sec);
	
	
	return 0;
    }

