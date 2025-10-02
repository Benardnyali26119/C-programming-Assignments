/*
Name:Benard Nyali
Reg:CT100/G/26119/25
Description:C Program to calculate charges for water consumption
*/

#include<stdio.h> 

int main() {
	int units;
	float bill;
	
	printf("Enter water units consumed:");
	scanf("%d",&units);
	
	if(units <=30) {
		bill = units * 20.0;
	}else if(units<=60) {
		bill = (30*20.0)+(units-30)*25.0;
	}else{
		bill = (30*20.0)+(30*25.0)+(units-60)*30.0;
}

printf("Total water bill: %.2f KES\n",bill);

return 0;

}