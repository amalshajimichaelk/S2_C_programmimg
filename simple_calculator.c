//Write a C program that acts as a simple calculator which shoul take 2 numbers and
//an operator as input.
#include<stdio.h>
int main(){
int num1,num2;
char op;
printf("Enter the numbers:");
scanf("%d%d",&num1,&num2);
printf("Enter the operator:");
scanf(" %c",&op);
switch(op){
	case '+':
		int sum;
		sum=num1+num2;
		printf("Sum: %d",sum);
		break;
	case '-':
		int difference;
		difference=num2-num1;
		printf("Difference: %d",difference);
		break;
	case '*':
		int mul;
		mul=num1*num2;
		printf("Product: %d",mul);
		break;
	case '/':
		if (num2!=0){
			float div=(float)num1/num2;
			printf("Division: %f",div);
		}else{
			printf("Invalid Entry");
			}
		break;
	case '%':
		int mod;
		if (num2!=0){
			mod=num1%num2;
			printf("Modulus: %d",mod);
		}else{
			printf("Invalid Entry");
			}
		break;
	default:
		printf("Invalid Entry");
		break;
	}
return 0;
}
	

