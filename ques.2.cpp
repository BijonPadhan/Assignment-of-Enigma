#include <stdio.h>
int main()
{
	//take two array as input,merge them and print it in reverse order using loop.
	int a[2],i;
	printf("enter array elements: \n");
	for(i=0;i<=1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse array elements: \n");
	for(i=1 ;i>=0;i--)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}