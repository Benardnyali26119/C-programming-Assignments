//C Program for Exam Eligibility

/*
Name:Benard Nyali
Reg:CT100/G/26119/25
Description:Program to check for student exam eligibility
*/

#include<stdio.h>

int main() {
	float Attendance;
	float AverageMarks;
	
	printf("Enter Attendance Percentage:");
	scanf("%f",&Attendance);
	printf("Enter Average Marks:");
	scanf("%f",&AverageMarks);
	
	if(Attendance >=75 && AverageMarks >=40){
		printf("Eligible for Final Exams.\n");
	}else{
		printf("Not eligible.\n");
	}
	
	return 0;
}