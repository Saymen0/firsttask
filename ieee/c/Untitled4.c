//Task 7
#include <stdio.h>

int main(){
    float cm;
    printf("Enter length in cm: ");
    scanf("%f", &cm);

    float m = cm / 100;
    float km = cm / 100000;

    printf("Length in m : %.2f\n", m);
    printf("Length in km is: %.2f\n", km);

    return 0;
}
