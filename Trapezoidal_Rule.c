#include<stdio.h>
#define f(x) (x*x*x)
int main()
{
	float h,b,a,n,x[10],y[100],s=0,sum,s1=0;
	printf("Enter the upper limit:");
	scanf("%f",&b);
	printf("\nEnter the lower limit:");
	scanf("%f",&a);
	printf("\nEnter the number of steps:");
	scanf("%f",&n);
	h=(b-a)/n;
	printf("\nh=%f",h);
	for(int i=0;i<=n;i++)
	{
		x[i]=a+i*h;
		y[i]=f(x[i]);
		printf("\nx[%d]=%f	y[%d]=%f",i,x[i],i,y[i]);
	}
	for(int i=0;i<=n;i++)
	{
		if(i==0 || i==n)
		{
			s1=s1+y[i];
		}
		else
		{
		    s=s+y[i];
	    //	printf("s=%f",s);		
		}
	
	}
	sum=h/2*(s1+2*s);
	printf("\nf(x)=%f",sum);
	return 0;	
}
