#include<stdio.h>
int fact(int);
void main()
{
	int n,i,j,ch=30;
	float arr[10][11],px=1,x,y,p,h;
	printf("\nEnter the no of data:");
	scanf("%d",&n);
	printf("\nEnter the data:");
	for(i=0;i<n;i++)
	{
		printf("\nX%d=",i+1);
		scanf("%f",&arr[i][0]);
		printf("\nY%d=",i+1);
		scanf("%f",&arr[i][1]);
	}
	for(j=2;j<=n;j++)
	{
		for(i=0;i<n-1;i++)
		arr[i][j]=arr[i+1][j-1]-arr[i][j-1];
	}
	printf("\nThe difference table");
	printf("\n\tX \tY");
	for(i=0;i<n-1;i++)
		printf("\t%c^%d",ch,i+1);
	for(i=0;i<n;i++)
	{
		printf("\n");
		for(j=0;j<n+1-i;j++)
			printf("\t%.4f",arr[i][j]);
	}
	printf("\nEnter the value of x for f(x)");
	scanf("%f",&x);
	h=arr[n-1][0]-arr[n-2][0];
	p=(x-arr[n-1][0])/h;
	y=arr[n-1][1];
	for(i=1;i<n;i++)
	{
		px=px*(p+(i-1));
		y=y+(arr[n-1-i][i+1]*px)/fact(i);
	}
	printf("\nthe value of f(x) at x=%f is %f",x,y);
}
int fact(int n)
{ 
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}