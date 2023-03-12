#include<stdio.h>
int main()
{
float r,A,D,C,PI=3.141;
printf("Enter the value of radius=");
scanf("%f",&r);
A=PI*r*r;
D=2*r;
C=2*PI*r;
printf("Area of a circle=%f\n",A);
printf("Diameter of a circle=%f\n",D);
printf("Circumference of a circle=%f\n",C);
return 0;
}