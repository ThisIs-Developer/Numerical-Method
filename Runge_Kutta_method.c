#include<stdio.h>
#define f(x,y) (x+y*y)//(y*y-x*x)/(y*y+x*x)//(x+y)// //(x-y)/(x+y)
int main()
{
	float x0,y0,h,xrq,yrq,k,k1,k2,k3,k4,n;
	printf("Enter the initial values of x and y:");
	scanf("%f%f",&x0,&y0);
	printf("Enter the step length:");
	scanf("%f",&h);
	printf("Enter the value of x for which y is required:");
	scanf("%f",&xrq);
	n=(xrq-x0)/h;
	for(int i=0;i<n;i++)
	{
		k1=h*(f(x0,y0));
		printf("k1=%f\n",k1);
		k2=h*(f((x0+h/2),(y0+k1/2)));
		printf("k2=%f\n",k2);
		k3=h*(f((x0+h/2),(y0+k2/2)));
		printf("k3=%f\n",k3);
		k4=h*(f((x0+h),(y0+k3)));
		printf("k4=%f\n",k4);
		k=(k1+2*k2+2*k3+k4)/6;
		printf("k=%f\n",k);
		yrq=y0+k;
		printf("x%d=%f\n",i,x0);
		printf("y%d=%f\n",i,y0);
		x0=x0+h;
		y0=yrq;
		printf("yrq%d=%f\n",i,yrq);
	}
	
}
