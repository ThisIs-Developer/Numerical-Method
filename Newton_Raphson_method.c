#include<stdio.h>
#include<stdlib.h>
#define f(x) (x*x*x-3*x-5)
#define g(x) (3*x*x-3)
int main()
{
	int x1,x2,n,i;
	float x3;
	printf("Enter the value of x1:");
	scanf("%d",&x1);
	printf("Enter the value of x2:");
	scanf("%d",&x2);
	printf("Enter the number of iteration:");
	scanf("%d",&n);
	printf("f(x1)=%d",f(x1));
	printf("\nf(x2)=%d",f(x2));
	if(f(x1)*f(x2)<0)
	{
		printf("\n|f(x1)|=%d",abs(f(x1)));
		printf("\n|f(x2)|=%d",abs(f(x2)));
		if(abs(f(x1))<abs(f(x2)))
		{
			x3=x1;
		}
		else if(abs(f(x2))<abs(f(x1)))
		{
			x3=x2;
		}
		for(i=1;i<=n;i++)
		{
			printf("\nIteration no.%d",i);
			x3=x3-(f(x3)/g(x3));
			printf("\nx3=%f",x3);
		}
	}
	else
	{
		printf("\nInvalid input");
	}
	return 0;
}
