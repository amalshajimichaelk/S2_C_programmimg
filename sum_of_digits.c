#include<stdio.h>
int main(){
int n,sum_of_digits=0,rem;
printf("Enter the number: ");
scanf("%d",&n);
while (n>0){
	rem=n%10;
	sum_of_digits=sum_of_digits+rem;
	n=n/10;
	}
printf("Sum of digits: %d",sum_of_digits);
return 0;
}
