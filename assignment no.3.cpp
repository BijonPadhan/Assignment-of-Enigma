/*take a number as input and prints the sum of its digits using a do while loop*/
#include<stdio.h>
  int main ()
  {
  	int n,sum=0,r;
  	printf("enter a number =");
  	scanf("%d",&n);
  	do
  	{
  		r=n%10;
  		sum=sum+r;
  		n=n/10;
	  }
	  while(n>0);
	  printf("the sum of digits of the given number is %d\n",sum);
  }
