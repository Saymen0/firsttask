#include <stdio.h>

int Palindrome(int num, int temp) {
    if (num == 0) {
        return temp;
    }
    temp = (temp * 10) + (num % 10);
    return Palindrome(num / 10, temp);
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int reverse = Palindrome(number, 0);
    if (number == reverse) {
        printf("%d is palindrome.\n", number);
    } else {
        printf("%d is not palindrome.\n", number);
    }
    return 0;
}
