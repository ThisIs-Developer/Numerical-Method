#include<stdio.h>
#include<math.h>
int main()
{
	int x,n,fact=1,sum=1;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("\nEnter the number of terms:");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		fact=fact*i;
		sum=sum+(pow(x,i)/fact);
	}
	//sum=sum+1;
	printf("Sum of the series=%d",sum);
	return 0;
}

