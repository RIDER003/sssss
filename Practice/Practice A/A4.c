#include<stdio.h>
 int main()
{
	int cube;
	int number;
	printf("Enter any value\n ");
	scanf("%d", &number);
	cube = number * number * number;
	printf("Its cube is %d\n ", cube, number);
    return 0;
}
