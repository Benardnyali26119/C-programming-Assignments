/*
NAME:BENARD NYALI
REG:CT100/G/26119/25
DESCRIPTION:Function to calculate fare.
*/

#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50.0;
}

int main() {
    float distance;
    
    printf("Enter distance in km: ");
    scanf("%f", &distance);
    
    printf("Fare for %.2f km: KSh. %.2f\n", distance, calculateFare(distance));
    
    return 0;
}