#include<stdio.h>
#define Pi 3.14159
#define area(r)(Pi*r*r)
#define surface_area(r,h)(2*Pi*r*(r+h))
int main(){
float r,h;
printf("Enter the radius: ");
scanf("%f",&r);
printf("Enter the height of the cylinder: ");
scanf("%f",&h);
printf("The Area of the Circle: %.2f sq.unit\n",area(r));
printf("The Surface Area of the Cylinder: %.2f sq.unit\n",surface_area(r,h));
return 0;
}
