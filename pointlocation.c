#include <stdio.h>

int main() {
    float x, y;

    // Input the coordinates of the point
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    // Determine the location of the point
    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (x == 0) {
        printf("The point lies on the y-axis.\n");
    } else if (y == 0) {
        printf("The point lies on the x-axis.\n");
    } else {
        printf("The point does not lie on the x-axis, y-axis, or the origin.\n");
    }

    return 0;
}