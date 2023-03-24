#include <stdio.h>
 int main ()
 {
 	//to copy the elements of one array to another array.
 	int a1[50],a2[100],i,n;
 	printf("enter size of array: ");
 	scanf("%d",&n);
 	printf("enter first array elements: \n");
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a1[i]);
	 }
	 printf("coping array elements. \n");
	 for(i=0;i<n;i++)
	 {
	 	a2[i]=a1[i];
	 }
	 printf("second array elements: \n");
	 for(i=0;i<n;i++)
	 {
	 	printf("%d \n",a2[i]);
	 }
	 return 0;
 }