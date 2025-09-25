//C program to check loan eligibility
/*
Name:Benard Nyali
Reg:CT100/G/26119/25
Description:Creating a program to check Loan Eligibility
*/

#include<stdio.h>

int main() {
	int age;
	float income;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	printf("Enter your Annual Income: ");
	scanf("%f",&income);
	
	if(age<20) { 
        printf("Unfortunately,We are unable to offer you a loan at this time.\n");
	}else{
    if(income>=21000){
        printf("Congratulations you Qualify for a loan.\n");
	}
	}
	return 0;
}	