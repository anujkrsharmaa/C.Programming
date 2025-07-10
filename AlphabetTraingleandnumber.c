#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // Check if the current row is even
            for (int j = 1; j <= i; j++) {
                printf("%c", 'A' + j - 1); // Print the corresponding alphabet for the column
            }
        } else { // If the current row is odd
            for (int j = 1; j <= i; j++) {
                printf("%d", j); // Print the column number as the number
            }
        }
        printf("\n");
    }
    return 0; 
}