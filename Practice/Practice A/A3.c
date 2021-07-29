#include<stdio.h>
 int main()
{
	int square;
	int number;
	printf("Enter any value\n ");
	scanf("%d", &number);
	square = number * number;
	printf("The square of a number is %d\n ", square, number);
    return 0;
}
