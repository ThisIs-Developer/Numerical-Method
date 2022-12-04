#include<stdio.h>
int main()
{
	float x[50],y[50],y1,h,f,f1,f2,f3=0,f4,f5=0;
	int a,b,i,n;
	printf("Enter number of terms:");
	scanf("%d",&n);
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	h=(b-a)/n;
	printf("h=%f",h);
	for(i=0;i<=n;i++)
	{
		x[i]=a+(i*h);
		printf("x[%d]=%f\n",i,x[i]);
	}
	for(i=0;i<=n;i++)
	{
		y1=1+(i*i);
		y[i]=1/y1;
		printf("y[%d]=%f\n",i,y[i]);
	}

	f=h/3;
	f1=y[0]+y[n];
	for(i=1;i<n;i=i+2)
	{
		f2=4*y[i];
		f3=f3+f2;
	}
	f1=f1+f3;
	for(i=2;i<=n-2;i=i+2)
	{
		f4=2*y[i];
		f5=f5+f4;
	}
	f1=f1+f5;
	f=f*f1;
	printf("f(x)=%f",f);
	return 0;
}
