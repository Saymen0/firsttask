#include <stdio.h>

void EvenNumbers(int start, int end) {
    if (start > end) {
        return;
    }
    if (start % 2 == 0) {
        printf("%d ", start);
    }
    EvenNumbers(start + 1, end);
}

void OddNumbers(int start, int end) {
    if (start > end) {
        return;
    }
    if (start % 2 != 0) {
        printf("%d ", start);
    }
    OddNumbers(start + 1, end);
}

int main() {
    int start, end;
    printf("Enter the start and end: ");
    scanf("%d %d", &start, &end);

    printf("Even numbers between %d and %d are: ", start, end);
    EvenNumbers(start, end);
    printf("\n");

    printf("Odd numbers between %d and %d are: ", start, end);
    OddNumbers(start, end);
    printf("\n");

    return 0;
}
