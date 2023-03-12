/* enter two numbers and perform all arithmetic operations using switch case.*/
#include<stdio.h>
 int main ()
 {
 	char ch ;
 	int a,b;
 	printf("give an operation");
 	scanf("%c", &ch);
 	
 	printf("enter two numbers = ");
 	scanf("%d %d", &a,&b);
 	
 	switch(ch)
 	{
 		case '+' :
		 printf("sum =%d",(a+b));
 		break;
 		case '-' :
		 printf("subtract =%d",(a-b));
 		break;
 		case '*' :
		 printf("multiplication =%d",(a*b));
 		break;
 		case '/' :
		 printf("division =%d",(a/b));
 		break;
 		case '%' :
		 printf("mod =%d",(a%b));
 		break;
	 }
	 return 0;
 }
