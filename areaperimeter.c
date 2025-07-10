#include<stdio.h>
int main(){
    int l;
    printf("Enter length: ");
    scanf("%d", &l);
    int b;
    printf("Enter breadth: ");
    scanf("%d", &b);
    int area = l * b;
    int perimeter = 2 * (l + b);
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);
    if (area > perimeter) {
        printf("Area is greater than perimeter");
    } else if (area < perimeter) {
        printf("Perimeter is greater than area");
    } else {
        printf("Area and perimeter are equal");
    }
    return 0;
}