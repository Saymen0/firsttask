#include <stdio.h>

int max(int num1, int num2);
int min(int num1, int num2);

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);


    int maximum = findMax(num1, num2);
    int minimum = findMin(num1, num2);

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);
    return 0;
}
