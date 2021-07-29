#include<stdio.h>
#define PI 3.14

int main(){
	
  float radius;
  float area;
  float circumference;

  printf(" Please Enter the radius of a circle\n");
  scanf("%f",&radius);

  area = PI*radius*radius; 
  circumference = 2* PI*radius;

  printf(" Area Of a Circle = %.2f\n", area);
  printf(" Circumference Of a Circle = %.2f\n", circumference);

  return 0;
}
