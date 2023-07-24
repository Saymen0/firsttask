//Task 6
#include <stdio.h>
#define PI 3.14

int main(){
    float r;
    printf("Enter radius of circle: ");
    scanf("%f", &r);

    float diameter = 2 * r;
    float circumference = 2 * PI * r;
    float area = PI * r * r;

    printf("Diameter: %.2f\n", diameter);
    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}
