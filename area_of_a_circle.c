#include<stdio.h>
int main(){
const float pi=3.14;
float r,area;
printf("Enter the radius in centimetres: ");
scanf("%f",&r);
area=pi*r*r;
printf("\nThe area of the circle with radius %fcm is %.3fsq.cm\n",r,area);
return 0;
}
