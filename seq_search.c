#include<stdio.h>
int main(){
int i,n,a[10],key,found=0;
printf("\nEnter the size of the array: ");
scanf("%d",&n);
printf("\nEnter the elements: ");
for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
printf("\n");
for (i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
printf("\nEnter the key element to search: ");
scanf("%d",&key);
int pos=0;
for(i=0;i<n;i++)
	{
	if (key==a[i]){
	found=1;
	pos=i;
	}
	}
if (found=0)
{
printf("\nThe key %d is not found.",key);
}
else{
printf("\nKey is at the position: %d.",pos);
}
return 0;
	}
