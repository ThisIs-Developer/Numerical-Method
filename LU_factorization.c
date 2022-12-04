#include<stdio.h>
 void main()
 {
 	float a[10][10],l[10][10],u[10][10],z[10],x[10],b[10];
 	int i,j,k,n;

 	printf("\nEnter the size of the coefficient matrix: ");
 	scanf("%d",&n);
 	printf("Enter the elements row-wise: ");
 	for(i=0;i<n;i++)
 		for(j=0;j<n;j++)
 			scanf("%f",&a[i][j]);
 	printf("Enter the right hand vector: ");
 	for(i=0;i<n;i++)
 		scanf("%f",&b[i]);
 	for(i=0;i<n;i++)
 		l[i][1]=a[i][1];
 	for(j=2;j<=n;j++)
 		u[1][j]=a[1][j]/l[1][1];
 	for(i=0;i<n;i++)
 		u[i][i]=1;
 	for(i=2;i<=n;i++)
 		for(j=2;j<=n;j++)
 			if(i>=j)
 			{
 				l[i][j]=a[i][j];
 				for(k=1;k<=j-1;k++)
 					l[i][j]-=l[i][k]*u[k][j];
 			}
 			else
 			{
 				u[i][j]=a[i][j];
 				for(k=1;k<=j-1;k++)
 					u[i][j]=-l[i][k]*u[k][j];
 				u[i][j]/=l[i][i];
 			}
 		printf("\nThe lower triangular matrix L: \n");
 		for(i=0;i<=n;i++)
 		{
 			for(j=0;j<n;j++)
 				printf("%f ",l[i][j]);
 			printf("\n");
 		}
 		printf("\nThe upper triangular matrix U: \n");
 		for(i=0;i<=n;i++)
 		{
 			for(j=0;j<i;j++)
 				printf(" ");
 			for(j=i;j<n;j++)
 				printf("%f ",l[i][j]);
 			printf("\n");
 		}
 		z[1]=b[1]/l[1][1];
 		for(j=1;i<n;i++)
 		{
 			z[i]=b[i];
 			for(j=0;j<i-1;j++)
 				z[i]-=l[i][j]*z[j];
 			z[i]/=l[i][i];
 		}
 		x[n]=z[n];
 		for(i=n-1;i>=0;i--)
 		{
 			x[i]=z[i];
 			for(j=i+1;j<n;j++)
 				x[i]-=u[i][j]*x[j];
 		}
 		printf("The solution is: ");
 		for(i=0;i<n;i++)
 			printf("%f ",x[i]);
 }