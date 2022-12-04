//Weddles rule
#include<stdio.h>
#include<math.h>
#define f(x) (1/(1+x*x))
int main()
{
	float x[10],y[10],ul,ll,h;
	printf("Enter the upper limit of the integral:");
	scanf("%f",&ul);
	printf("Enter the lower limit of the integral:");
	scanf("%f",&ll);
	h=(ul-ll)/6;
	printf("h=%f",h);
	x[0]=0;
	y[0]=f(x[0]);
	
	printf("x[0]=%f		y[0]=%f\n",x[0],y[0]);
	for(int i=1;i<=6;i++)
	{
		x[i]=x[0]+i*h;
		y[i]=f(x[i]);
		printf("x[%d]=%f	 y[%d]=%f\n",i,x[i],i,y[i]);
	}
	float sum=(3*h/10)*(y[0]+5*y[1]+y[2]+6*y[3]+y[4]+5*y[5]+y[6]);
	printf("f(x)=%f",sum);
	return 0;
}
