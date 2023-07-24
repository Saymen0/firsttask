//Task 12
#include <stdio.h>
#include <math.h>

int main(){
    float num;
    printf("Enter a number: ");
    scanf("%f", &num);

    float root = sqrt(num);
    printf("Square root of %f is %f\n", num, root);

    return 0;
}
