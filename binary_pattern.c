#include<stdio.h>
int main(){
int n,i,j,k=1;
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<n;i++){
	for(j=1;j<i;j++){
		if(k==1){
			printf("%d ",k);
			k=0;
			}
		else{
			printf("%d ",k);
			k=1;
			}
		}
	printf("\n");
	}
return 0;
}
