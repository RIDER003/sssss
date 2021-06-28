// TODO 
// Include all necessary header files here
#include<stdio.h>

int main(){

    // TODO
    // Declare one integer variable (variable name must be min 3 character length)
    int value;
    // Declare four integer variable (variable name must be min 3 character length)
    int value1;
    int value2;
    int value3;
    int value4;
    
    

    printf("Enter a number: ");

    // TODO
    // complete the below scanf to read one integer variable
    scanf("%d", &value);

    // TODO
    // write a code to determine whether number is positive, negative or zero using ternary operator
    (value>0)? printf(" Number is Positive \n"):
    (value<0)? printf(" Number is Negative \n"):
	printf(" Number is zero \n");

    // find out the problem in below printf and resolve it
    printf("Enter four numbers:" );
   
    // TODO
    // store user input to four integer variable
    scanf("%d%d%d%d", &value1, &value2, &value3, &value4);
    // TODO
    // write a code to find the smallest among four numbers using ternary operator
    (value1<value2 && value1<value3 && value1<value4)? printf("Value1 is Smallest \n"):
    (value2<value1 && value2<value3 && value2<value4)? printf("Value2 is Smallest \n"):
    (value3<value1 && value1<value2 && value1<value4)? printf("Value3 is Smallest \n"):
    (value4<value1 && value4<value2 && value4<value3)? printf("Value4 is Smallest \n"):
    printf("Number is Smallest \n");
    	
    // BONUS TASK (use your own logic to complete)
    // Add variable named percentage at declaration section
    float percentage;
    // write a code to take percentage as input from user
    printf("Percentage obtained by the user \n");
    scanf("%f", &percentage);
    // determine division of user by percentage using ternary operator
    // criteria for division: 
    // percentage >= 80         Distinction
    // 80 > percentage >= 70    First
    // 70 > percentage >= 50    Second
    // 50 > percentage >= 40    Third
    // 40 > percentage          Fail
    (percentage>80 && percentage>=70)? printf("You are Distinction \n"):
    (percentage<80 && percentage>=70)? printf("You are First \n"):
    (percentage<70 && percentage>=50)? printf("You are Second \n"):	
    (percentage<50 && percentage>=40)? printf("You are Third \n"):
    (percentage<40 )? printf("You are fail \n"):
    printf("Percentage obtained by the user \n");
    
	return 0;
}
