#include<stdio.h>
int main(){

    int a = 10;
    int x = 20, y;
    float b = 3.5;
    char c = 'a';
    // printf("a = %d\n",a);
    // y = x + a;  // y = 30
    // printf("a++ = %d\n",a++);   // a = 11
    // y = x + a;  // y = 31
    // printf("third line a++ = %d\n",a);
    // printf("\n");
    printf("a = %d\n",a);       // a = 10
    a++;                        // a = 11
    printf("a = %d\n",a);       // a = 11

    printf("a = %d\n",a);       // a = 10
    ++a;                        // a = 11
    printf("a = %d\n",a);       // a = 11

    printf("++a = %d\n",++a);   // ++a = 11 // --a = 9
    // printf("third line ++a = %d\n",a++);
    // printf("third line ++a = %d\n",++a);


    // printf("a = %d\n",a);
    // printf("a-- = %d\n",a--);
    // printf("third line a-- = %d\n",a);
    // printf("\n");
    // printf("a = %d\n",a);
    // printf("--a = %d\n",--a);
    // printf("third line --a = %d\n",a--);
    // printf("third line --a = %d\n",--a);

    // printf("b = %f\n",b);
    // printf("++b = %f\n",++b);       // b = b + 1;
    
    // printf("c = %c\n",c);
    // printf("++c = %c\n",++c);
    return 0;
}