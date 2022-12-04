#include<stdio.h>
int main(){
	int i,j,n,xr,x[100],y[100];
	float p,yr=0;
	printf("Enter the num of entries:");
	scanf("%d",&n);
	printf("Enter the values of x:\n");
	for(i=0;i<n;i++)
	{
		printf("\nx[%d]=",i);
		scanf("%d",&x[i]);
	}
	printf("Enter the values of y:\n");
	for(i=0;i<n;i++)
	{
		printf("\ny[%d]=",i);
		scanf("%d",&y[i]);
	}
	printf("Enter the values x for which you want to find y:");
	scanf("%d",&xr);
	for(i=0;i<n;i++)
	{
		p=1;
		for(j=0;j<n;j++)
		{
			if(i!=j)
			{
		        p=p*(xr-x[j])/(x[i]-x[j]);
			}
		}
		yr=yr+p*y[i];
	}
	printf("for x=%d then y=%f",xr,yr);
	return 0;
}
