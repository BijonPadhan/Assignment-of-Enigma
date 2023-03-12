/*take a number as input and checks whether it is positive ,negative or zero*/
#include<stdio.h>
  int main()
  {
  	int num;
  	printf("enter a number =");
  	scanf("%d", &num);
  	
  	if(num>0)
  	  {
  	  	printf("number is positive\n");
		}
	else if(num<0)
	{
		printf("number is negative\n");
	}
	else
	{
		printf("number is zero\n");
	}
	return 0;
  }
