#include<stdio.h>
int main(){
char grade;
int roll_no,age,height,weight;
printf("Enter the roll number: ");
scanf("%d",&roll_no);
printf("Enter the age: ");
scanf("%d",&age);
printf("Enter the height in centimetres: ");
scanf("%d",&height);
printf("Enter the weight in kilogram: ");
scanf("%d",&weight);
printf("Enter the grade: ");
scanf(" %c",&grade);
printf("\nThe roll number is %d.",roll_no);
printf("\nThe age is %d years.",age);
printf("\nThe height is %d centimetres.",height);
printf("\nThe weight is %d kilograms.",weight);
printf("\nThe grade is %c.",grade);
return 0;
}
