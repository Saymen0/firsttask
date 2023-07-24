//Task 11
#include <stdio.h>

int main(){
    int b, ex;
    printf("Enter base and exponent: ");
    scanf("%d %d", &b, &ex);

    int result = 1;
    while (ex != 0) {
        result *= b;
        --ex;
    }

    printf("%d^%d = %d\n", b, ex, result);

    return 0;
}
