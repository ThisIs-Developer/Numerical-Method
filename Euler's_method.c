#include<stdio.h>
#define f(x,y) (x+y) //((y-x)/(y+x))
int main()
{
	float x0,y0,y,xrq,h,n;

	printf("Enter the initial value of x:");
	scanf("%f",&x0);
	printf("Enter the initial value of y:");
	scanf("%f",&y0);
	printf("Enter the value of x for which y required:");
	scanf("%f",&xrq);
	printf("Enter the number of steps:");
	scanf("%f",&n);
	h=(xrq-x0)/n;  //h=interval width(size of each step)
	printf("Step length=%f",h);
	for(int i=0;i<n;i++)
	{
		if(x0<=xrq)
		{
			y=y0+(h*f(x0,y0));
			y0=y;
			x0=x0+h;
			printf("\nx%d=%f\n",(i+1),x0);
			printf("y%d=%f\n",(i+1),y0);
		}
		else
		{
			break;
		}
		
	}
	printf("\nThe value of y is %f at x=%f",y,x0);
	
	return 0;
}
