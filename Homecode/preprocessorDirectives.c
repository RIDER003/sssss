#include<stdio.h>   // printf(), scanf(), putchar(), getchar()
// #include<stdlib.h>  // exit(), 
// #include<math.h>    // sqrt(), cbrt(), abs(), pow(base,power), 
// #include<conio.h>   // getch(), putch(), getche()
// #include<string.h>  // strupr(), strlwr(), strcat(), strlen(), strrev(), strcpy(), strcmp()

// #define identifier seq_of_char      //syntax
// #define PI 3.14
#define square(x) x*x
#define cube(x) square(x)*x

int main(){
    int a = 6;
    printf("square = %d",square(a));        // a*a

    printf("cube = %d",cube(a));        // cube(a) = square(a)*a   = a*a*a 
}