#include<stdio.h>
#define f(x) (x*x*x-5*x+1)//(x*x*x-4)
int main()
{
	float x[10],n;
	printf("\nEnter the values x0 and x1:");
	scanf("%f%f",&x[0],&x[1]);
	printf("\nEnter the values of intervals:");
	scanf("%f",&n);
	for(int i=1;i<=n;i++)
	{
		x[i+1]=x[i]-f(x[i])*((x[i]-x[i-1])/(f(x[i])-f(x[i-1])));
		printf("x[%d]=%f\n",i+1,x[i+1]);
		printf("f(x[%d])=%f\n",i+1,f(x[i+1]));
	}
	return 0;
}
