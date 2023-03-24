#include <stdio.h>
#include<string.h>
 int main()
 {
 	//WAP to count the number of vowels and consonants in a string.
 	char name[50];
 	int i,vc=0,cc=0;
 	
 	printf("enter any string: \n");
 	scanf("%s",&name);
 	
 	for(i=0;i<strlen(name);i++)
 	{
 		if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'||
		 name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
 		   vc=vc+1;
 		   else
 		      cc=cc+1;
	 }
	 printf("vowels count is %d \n",vc);
	 printf("consonants count is %d \n",cc);
 	return 0;
 }