#include<stdio.h>
int main(){
int i,j,m1,n1,m2,n2;
printf("Enter the no. of rows and columns of the 1st matrix: ");
scanf("%d%d",&m1,&n1);
printf("\n");
printf("Enter the no. of rows and columns of the 2nd matrix: ");
scanf("%d%d",&m2,&n2);
printf("\n");
int a[m1][n1],b[m2][n2],c[m1][n1];
if(m1!=m2 || n1!=n2)
	{
	printf("Matrix addition can't be executed.");
	return 0;
	}
printf("Enter the elements of 1st matrix: ");
for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
printf("\n");
printf("Enter the elements of 2nd matrix: ");
for(i=0;i<m2;i++)
	{
	for(j=0;j<n2;j++)
		{
		scanf("%d",&b[i][j]);
		}
	}
printf("\n");
printf("1st matrix:\n");
for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
		{
		printf("%d\t",a[i][j]);
		}
	printf("\n");
	}
printf("\n");
printf("2nd matrix:\n");
for(i=0;i<m2;i++)
	{
	for(j=0;j<n2;j++)
		{
		printf("%d\t",b[i][j]);
		}
	printf("\n");
	}
printf("\n");
for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}
printf("Result:\n");
for(i=0;i<m1;i++)
	{
	for(j=0;j<n1;j++)
		{
		printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
return 0;
}
