#include<stdio.h>
int main(){
    int n, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    // 1 - 2 + 3 - 4 + ... n terms
    // odd numbers ---> Addition
    // even numbers ---> Subtraction
    for(int i = 1; i <= n; i++){
        if (i % 2 == 0) {
            sum -= i; // Subtract even numbers
        } else {
            sum += i; // Add odd numbers
        }
    }
    printf("Sum of series: %d\n", sum);
    return 0;
}