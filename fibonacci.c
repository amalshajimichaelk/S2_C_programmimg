#include<stdio.h>
int fib(int n){
if(n==0)
return 0;
else if(n==1)
return 1;
else
return fib(n-1)+fib(n-2);
}
int main(){
int i,n;
printf("Enter the limit: ");
scanf("%d",&n);
printf("The Fibonacci Series upto %dth term:\n",n);
for(i=0;i<n;i++){
	printf("%d\t",fib(i));
	}
return 0;
}
