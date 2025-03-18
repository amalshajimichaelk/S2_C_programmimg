#include<stdio.h>
void read(int arr[],int);
void print(int arr[],int);
int main(){
	int arr[30],n;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	arr[n];
	read(arr,n);
	print(arr,n);
	return 0;
	}
void read(int arr[], int a)
{
	int i,sum=0;
	printf("Enter the elements:\n");
	for(i=0;i<a;i++){
		scanf("%d",&arr[i]);
		sum+=arr[i];
		}
	printf("The Sum of the elements: %d\n",sum);
			
}
void print(int arr[],int a)
{
	int i;
	printf("The elements are:\n");
	for(i=0;i<a;i++){
		printf("%d\t",arr[i]);
		}
}
