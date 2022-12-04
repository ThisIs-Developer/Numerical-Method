#include<stdio.h>
#define f(x) (x*x*x-2*x-5)
int main()
{
	float x1,x2,x0;
	printf("Enter the value of x1:\n");
	scanf("%f",&x1);
	printf("f(x1)=%f\n",f(x1));
	printf("Enter the value of x2:\n");
	scanf("%f",&x2);
	printf("f(x2)=%f\n",f(x2));	
	for(int i=1;i<=4;i++)
	{
		printf("\nFor %d approximation of root:\n",i);
		x0=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));
		printf("x0=%f\n",x0);
		printf("f(x0)=%f\n",f(x0));
		if(f(x0)>0)
		{
			if(f(x1)>0)
			{
				x1=x0;
			}
			if(f(x2)>0)
			{
				x2=x0;
			}
		}
		else if(f(x0)<0)
		{
			if(f(x1)<0)
			{
				x1=x0;
			}
			if(f(x2)<0)
			{
				x2=x0;
			}
		}
		else
		{
			printf("Invalid...");
		}
	
	}
		printf("x1=%f\nx2=%f\n",x1,x2);
		printf("f(x1)=%f\n",f(x1));
		printf("f(x2)=%f\n",f(x2));
	return 0;
}

