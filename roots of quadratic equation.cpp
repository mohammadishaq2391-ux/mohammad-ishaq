#include<stdio.h>
#include<math.h>
int main( )
{
	int a,b,c,d;
	float r1,r2;
	printf("enter the value a,b and c");
	scanf("%d%d%d,&a,&b,&c");
	d=b*b-4*a*c;
	   if(d>0)
	  {  
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("the equation has two real roots=%f%f",r1,r2);
	  }
	if(d==0)
	  {
		r1== -b/(2*a);
		printf("the equation has only one root=%f",r1);
	  }
	if(d<0)
	  {
		printf("the equation has imaginary roots");
	  }
	return 0;
}
