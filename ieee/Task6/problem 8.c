#include <stdio.h>
#include <math.h>

int Armstrong(int num) {
    int temp = num;
    int numDig = 0;
    while (temp > 0) {
        temp /= 10;
        numDig++;
    }
    temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, numDig);
        temp /= 10;
    }
    return (sum == num);
}

void ArmstrongNum(int start, int end) {
    printf("Armstrong numbers between %d and %d are: ", start, end);
    for (int i = start; i <= end; i++) {
        if (Armstrong(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter the starting and ending numbers: ");
    scanf("%d %d", &start, &end);
    ArmstrongNum(start, end);
    return 0;
}
