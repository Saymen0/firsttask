//Task 11
#include <stdio.h>

int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);

    unsigned int flipped = ~num;

    printf("Flipped binary number is: %u\n", flipped);

    return 0;
}
