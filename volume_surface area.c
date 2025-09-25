//C program to calculate Volume and Surface Area
/*
Name:Benard Nyali
Reg:CT100/G/26119/25
Description:Calculating volume and Surface area
*/

#include<stdio.h>
#include<math.h>

int main() {
	double radius,height,volume,surfaceArea;
  	const double pi=3.142;
	                                                                                                                                                                                          
	printf("Enter the radius: ");
	scanf("%lf",&radius);
	printf("Enter the height: ");
	scanf("%lf",&height);
	
	volume=pi*radius*radius*height;
	surfaceArea=2*pi*radius*radius+2*pi*radius*height;
	
	printf("\nVolume of the cylinder= %.2lf \n",volume);
	printf("Surface Area of the cylinder= %.2lf \n",surfaceArea);
	
	return 0;
}
	
	