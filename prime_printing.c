#include<stdio.h>
int main(){
int n,i,j,isprime;
printf("Enter the limit: ");
scanf("%d",&n);
if(n<2){
	printf("The limit should be greater than 2.\n");
	}
else{
	printf("Prime numbers upto %d are:\n",n);
	for(i=2;i<=n;i++){
	isprime=1;
	for(j=2;j<=i/2;j++){
		if(i%j==0){
			isprime=0;
			break;
			}
		}
	if(isprime){
		printf("%d\t",i);
		}
	}
	}
return 0;
}
