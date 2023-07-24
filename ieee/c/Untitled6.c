//Task 10
#include <stdio.h>

int main(){
    int D;
    printf("Enter number of days: ");
    scanf("%d", &D);

    int Y = D / 365;
    int W = (D % 365) / 7;

    printf("%d days is equal to %d years, %d weeks and %d days\n", D, Y, W);

    return 0;
}
