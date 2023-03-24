#include <stdio.h>
 int main()
 {
 	//find maximum occurring integer in an array.
 	int a[100],i,n,max;
 	printf("enter the size of array: ");
 	scanf("%d",&n);
 	printf("enter the elements of array: \n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 max=a[0];
	 for(i=0;i<n;i++)
	 {
	 	if(a[i]>max)
	 	{
	 		max=a[i];
		 }
	 }
	 printf("the maximum value of array : %d",max);
	 return 0;
 }