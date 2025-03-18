#include<stdio.h>
int factorial(int);
int main(){
	int x;
	printf("Enter the value:");
	scanf("%d",&x);
	printf("The factorial of %d is %d\n",x,factorial(x));
	return 0;
}
int factorial(int a)
{
	int factorial=1,i;
	for(i=1;i<=a;i++){
		factorial*=i;
		}
	return factorial;
}
