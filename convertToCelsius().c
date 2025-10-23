/*
NAME:BENARD NYALI
REG:CT100/G/26119/25
DESCRIPTION:Function to convert temperature to celsius.
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float fahrenheit;
    
    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    
    printf("%.2f°F = %.2f°C\n", fahrenheit, convertToCelsius(fahrenheit));
    
    return 0;
}