//Task 3
#include <stdio.h>

int main() {
    int num, num2;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter the bit number: ");
    scanf("%d", &num2);

    int bit = (num >> num2) & 1;

    printf("Bit %d of %d is %d\n", num2, num, bit);

    //Task 4
     num = num | (1 << num2);

    printf("After %d, the number is %d\n", num2, num);

    //Task 5
    num = num & ~(1 << num2);

    printf("After %d, the number is %d\n", num2, num);

    //Task 6

     num = num ^ (1 << num2);

    printf("After %d, the number is %d\n", num2, num);


    return 0;
}
