//Task 16
#include <stdio.h>

int main(){
    int marks[5];
    int total = 0;

    for (int x = 0; x < 5; x++) {
        printf("Enter marks of subject %d: ", x+1);
        scanf("%d", &marks[x]);
        total += marks[x];
    }

    float average = (float)total / 5;
    float percentage = (float)total / 5;

    printf("Total marks obtained: %d\n", total);
    printf("Average marks obtained: %.2f\n", average);
    printf("Percentage marks obtained: %.2f%%\n", percentage);

    return 0;
}
