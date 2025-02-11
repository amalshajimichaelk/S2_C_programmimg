#include<stdio.h>
int main(){
int i,n,a[10],p1,p2;
printf("Enter the size of the array: ");
scanf("%d",&n);
printf("Enter the elements: ");
for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("\n");
for (i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
int max=a[0],min=a[0];
for (i=1;i<n;i++)
	{
	if (a[i]>max){
	max=a[i];
	p1=i;
	}
	if (a[i]<min){
	min=a[i];
	p2=i;
	}
	}
printf("\nMaximum is %d at the %dth position.",max,p1);
printf("\nMinimum is %d at the %dth position.",min,p2);
return 0;
	}
