//Task 1
#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num & 1) {
        printf("LSB of %d is set (1)\n", num);
    } else {
        printf("LSB of %d is not set (0)\n", num);
    }
//Task 2
    int num2;
    printf("Enter a number: ");
    scanf("%d", &num2);

    int bits = sizeof(num2) * 8;
    int msb = 1 << (bits-1);

    if (num2 & msb) {
        printf("MSB of %d is set (1)\n", num2);
    } else {
        printf("MSB of %d is not set (0)\n", num2);
    }

    return 0;
}
