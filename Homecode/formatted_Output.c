#include<stdio.h>

int main(){

    int num, num2;
    num = 111;  // octal = 144  // hexa = 64
    num2 = 123456;
    float f;
    f= 2357.56834;
    char ch;
    ch = 'a';
    char str[50] = "This is C Programming class.";
    
    printf("Formatted Output\n");

    // printf("Num = %d\n",num);
    //printf("f = %f\n",f);
    //printf("ch = %c \n",ch);

    // printf("Octal = %o\n",num);
    // printf("Hexa = %x\n",num);
    
    // fieldwidth - integer
    // printf("%d\n",num);
    // printf("%d\n",num2);
    // printf("%10d\n",num);
    

    // flag -, +, 0, #
    // printf("%-10d %d\n",num2, num2);
    // printf("%+d\n",num);


    // printf("Octal = %#o\n",num);
    // printf("Hexa = %#x\n",num);
    // printf("%10d\n",num);
    // printf("%010d\n",num);
    // printf("%s\n","C Program");
    printf("%s\n",str);
    // printf("%f\n",f);
    // printf("%.5f\n",f);
    // printf("%.4f\n",f);
    // printf("%.3f\n",f);
    // printf("%.2f\n",f);
    // printf("%.1f\n",f);
    // printf("%.0f\n",f);

    // printf("%15.2f\n",f);
    // printf("%-15.2f\n",f);
    // printf("%015.2f\n",f);
    printf("End of Formatted Output\n");
    return 0;
}

