#include <stdio.h>
#include <math.h>

double Diameter(double radius) {
    return 2 * radius;
}

double Circumference(double radius) {
    return 2 * M_PI * radius;
}

double Area(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;
    printf("Enter the radius : ");
    scanf("%lf", &radius);
    double diameter = Diameter(radius);
    double circumference = Circumference(radius);
    double area = Area(radius);
    printf("Diameter: %.2lf\n", diameter);
    printf("Circumference: %.2lf\n", circumference);
    printf("Area: %.2lf\n", area);
    return 0;
}
