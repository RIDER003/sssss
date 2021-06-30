#include<stdio.h>
int main(){

    // int num1, num2;
    // printf("Enter two numbers: ");
    // scanf("%d %d",&num1,&num2);

    // num1 > num2 ? printf("\n%d is greater than %d\n",num1,num2) : printf("\n%d is greater than %d\n",num2,num1);

    // num1 < num2 ? printf("\n%d is smaller than %d\n",num1,num2) : printf("\n%d is greater than %d\n",num1,num2);
        
    // int num;
    // printf("Enter a number: ");
    // scanf("%d",&num);
    // num%2 == 0  ? printf("\n%d is even\n",num) : printf("\n%d is odd\n",num);
    // num%2 != 0  ? printf("\n%d is odd\n",num) : printf("\n%d is even\n",num);

    // nested ternary operator

    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    // num1 > num2 ? num1 > num3 ? printf("\n%d is largest\n",num1) : printf("\n%d is largest\n",num3) : num2 > num3 ? printf("\n%d is largest\n",num2) : printf("\n%d is largest\n",num3);

    ((num1 > num2) && (num1 > num3)) ? printf("\n%d is largest\n",num1) : (num2 > num3) ? printf("\n%d is largest\n",num2) : printf("\n%d is largest\n",num3);

}