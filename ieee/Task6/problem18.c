#include <stdio.h>

int fac(int num) {
    if (num == 0) {
        return 1;
    }
    return num * fac(num - 1);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int fact = fac(number);
    printf("Factorial of %d is %d\n", number, fact);
    return 0;
}
