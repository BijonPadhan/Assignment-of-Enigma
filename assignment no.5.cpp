/* enter the radius of the circle and find its diameter,circumference and area.*/
#include <stdio.h>
  int main ()
  {
  	float radius;
  	printf("enter the radius");
  	scanf("%f",&radius);
  	
  	printf("diameter = %f \n",(2*radius));
  	printf("circumference = %f \n",(2*3.14*radius));
  	printf("area = %f \n",(3.14*radius*radius));
  	
  	return 0;
  }
