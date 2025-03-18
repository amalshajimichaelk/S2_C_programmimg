#include<stdio.h>
void pallindrome(int);
int n;
int main(){
	printf("Enter the number: ");
	scanf("%d",&n);
	pallindrome(n);
	return 0;
}
void pallindrome(int a)
{
	int rev=0,rem;
	while (a>0){
	rem=a%10;
	rev=(rev*10)+rem;
	a=a/10;
	}
	if(rev==n){
		printf("The number %d is pallindrome.\n",n);
		}
	else{
		printf("The number %d is not pallindrome.\n",n);
		}
}
