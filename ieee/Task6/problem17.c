#include <stdio.h>

int Digits(int num) {
    if (num == 0) {
        return 0;
    }
    return (num % 10) + Digits(num / 10);
}

int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sum =Digits(number);
    printf("Sum of digits of %d is %d\n", number, sum);


    return 0;
}
