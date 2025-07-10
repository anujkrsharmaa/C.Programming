#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3;

    // Input the coordinates of the three points
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter the coordinates of the third point (x3, y3): ");
    scanf("%f %f", &x3, &y3);

    // Check if the points are collinear using the area of the triangle formula
    // Area = 0.5 * |x1(y2-y3) + x2(y3-y1) + x3(y1-y2)|
    // If the area is 0, the points are collinear
    float area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are not collinear.\n");
    }

    return 0;
}