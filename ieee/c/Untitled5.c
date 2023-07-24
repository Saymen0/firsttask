//Task 8
#include <stdio.h>

int main(){
    float c;
    printf("Enter temperature in celsius: ");
    scanf("%f", &c);

    float F = (c * 9/5) + 32;

    printf("Temperature in Fahrenheit: %.2f\n", F);

    return 0;
}
