/*
NAME:BENARD NYALI
REG:CT100/G/26119/25
DESCRIPTION:Function to calculate electric bill
*/
#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0.0;
    
    if (units > 200) {
        bill = 100 * 10 + 100 * 15 + (units - 200) * 20;
    } else if (units > 100) {
        bill = 100 * 10 + (units - 100) * 15;
    } else {
        bill = units * 10;
    }
    
    return bill;
}

int main() {
    int units;
    
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
        return 1;
    }
    
    float total = calculateElectricBill(units);
    printf("Electric bill for %d units: KSh. %.2f\n", units, total);
    
    return 0;
}