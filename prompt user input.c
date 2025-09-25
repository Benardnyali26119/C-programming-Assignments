//simple c program
/*
Name:Benard Nyali
Reg:CT100/G/26119/25
Description:Showing My profile
*/

#include <stdio.h>

//main funtion
int main() {
    int height;
    printf("Enter your height: ");
    scanf("%d",&height);
    printf("Your height is %d \n",height);
    char contact[10];
    printf("Enter your contact:");
    scanf("%s",&contact);
    printf("Your contact is %s \n",contact);
    int weight;
    printf("Enter your weight:");
    scanf("%d",&weight);
    printf("Your weight is %d \n",weight);
    return 0;
}