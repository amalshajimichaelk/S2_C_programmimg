#include<stdio.h>
int main(){
int n,i=1;
printf("Enter the integer: ");
scanf("%d",&n);
printf("The Factors are:\n");
while(i<=n){
	if(n%i==0){
		printf("%d\n",i);
		}
	i++;	
	}
return 0;
}
