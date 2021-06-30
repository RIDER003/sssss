// #include<stdio.h>

// int main(){

//     int a;
//     a = 10;
//     printf("%d\n",a);
//     printf("%d\n",&a);
//     return 0;
// }


// pwd  /data/data/com.termux/files

// cd /    root
// cd /data/data/com.termux/files/home
// ls
// storage
// shared
// mkdir CProg
// cd CProg
// termux-setup-storage
// git clone


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
    // print second float variable with .precision (precision = 2
    // read and store hour, minute, second using ordinary character (:) in pattern

    int num1;   
    int num2,num3;
    char character;
    float num6;
    double d;
    float num7;
    int hour,min,sec;



    printf("enter three number");
    scanf("%3d %*d %d",&num1,&num2,&num3);
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n",num1,num2,num3);
    printf("num1=%15d\n",num1);
    printf("num2=%015d\n",num2);
    printf("num2=%-15d",num2);
    printf("num2=%-15d\n",num2);
    // printf("\nHexadecimal of %d is %#x and Octal of %d is %#o\n", num3, num3);
    printf("num2=%#x\n",num2);
    printf("num2=%#o\n",num2);
    // printf("Enter a character");
    // scanf("%*c %c",&ch);
    // printf("The character is %c\n",ch);

    //  printf("Enter two float number");
    // scanf("%f %f",&num6,&num7);
    // printf("num6=%15f num7=%.2f\n",num6 ,num7);

    // printf("Enter time (hr:mm:ss):");
    // scanf("%d:%d:%d", &hour,&min,&sec);
    // printf("The time is %d %d %d\n",hour ,min ,sec);

    // num1 = 4;
    // hour = 40;

    return 0;
}

a = 10 
b = 20

output:
a = 20
b = 10

third variable:
int a, b, c;
a = 10;
b = 20;

c = a;      // c = 10
a = b;      // a = 20
b = c;      // b = 10

int a, b;
a = 10;
b = 20;

a = a + b;  // a = 30
b = a - b;  // b = 30 - 20 // b = 10
a = a - b;  // a = 30 - 10 // a = 20

b = a + b;
a = b - a;
b = b - a;