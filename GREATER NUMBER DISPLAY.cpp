#include<stdio.h>
int main()
{
int x,y;
	printf("enter two integer");
	scanf("%d%d",&x,&y);
if(x>y)
{
	printf("%d is greater than %d",&x,&y);
}
if(y>x)
{
	printf("%d is greater than %d",&y,&x);
}

else
{
	printf("both the entered values are equal");
}
}
