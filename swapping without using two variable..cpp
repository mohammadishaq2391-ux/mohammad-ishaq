#include<stdio.h>
int main()
{
	int x,y;
	//input the two numbers
	printf("enter the two numbers");
	scanf("%d%d",&x,&y);
	printf("number before swapping are %d%d \n",x,y);
	//swapping
	x=x=y;
	y=x-y;
	x=x-y;
	printf("number after swapping are %d%d",x,y);
	return 0;
}
