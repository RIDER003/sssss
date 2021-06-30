// built in functions:
    // stdio.h conio.h

    // character => getchar putchar getch putch getche 
    // string => gets puts


    // unformatted Input: getchar getch getche gets
    // unformatted Output: putchar putch puts
    // syntax:
    //     getchar:
    //         variable_name = getchar();
    //     putchar:
    //         putchar(variable_name);

// #include<stdio.h>
// int main(){

//     char character;
//     character = getchar();
//     putchar(character);
//     return 0;
// }
    

    //  syntax:
    //     getch:
    //         variable_name = getch();
    //     putch:
    //         putch(variable_name);

#include<stdio.h>
#include<conio.h>
int main(){
    char character;
    character = getch();
    putch(character);
    return 0;
}


//  syntax:
    //     getche:
    //         variable_name = getche();
    

// #include<stdio.h>

// int main(){

//     char character;
//     character = getche();
//     putchar(character);
//     return 0;
// }


//  syntax:
    //     gets:
    //         gets(variable_name);
        // puts:
        //     puts(variable_name);
    

// #include<stdio.h>
// int main(){

//     char name[50];
//     puts("Enter your name: ");
//     gets(name);
//     puts("Name: ");
//     puts(name);
//     return 0;
// }