#include<stdio.h>
int main()
{
  	float breadth;
	float length;
	float Area;
	float Perimeter;
 
  	printf (" Enter the breadth of a Rectangle\n ");
  	scanf ("%f",&breadth);

  	printf (" Enter the Length of a Rectangle\n ");
  	scanf ("%f",&length);
	   
  	Area = length * breadth;
    Perimeter = 2 * (length + breadth);
    
	printf(" The Area of a Rectangle = %.2f\n", Area);
	printf(" The Perimeter of a Rectangle = %.2f\n", Perimeter);
	
	
 
  	return 0;
}
