#include <stdio.h>
int main()
{
	//write a program to sort a given array.
	int a[5],i,j,temp;
	printf("enter array elements: \n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])//codition for ascending order.
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("array elements: \n");
	for(i=0;i<=4;i++)
	{
		printf("%d \n",a[i]);
	}
	return 0;
}