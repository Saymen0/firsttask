#include <stdio.h>

int main(){
    int length, breadth;
    printf("Enter length : ");
    scanf("%d", &length);
    printf("Enter breadth :");
    scanf("%d", &breadth);
 //Task 4
     int perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle: %d\n", perimeter);
    //Task 5
     int area = length * breadth;
    printf("Area of rectangle: %d\n", area);

    return 0;
}
