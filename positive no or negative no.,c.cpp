#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number ");
	scanf("%d",&x);

 	if(x>=0)
	{
		printf("%d is positive number",x);
	}
 
 if(x<0)
	{
    	printf("%d is negative number",x); 
	}
	
	return 0;
}
