#include<stdio.h>
int zigzag(int n) {
    // Base case: if n is 0, return
    if (n == 0) return 0;
    printf("%d ", n); // Print the current number
    zigzag(n - 1); // Recursive call with n-1
    printf("%d ", n); // Print the current number again after returning from recursion
    zigzag(n - 1); // Recursive call with n-1 again
    printf("%d ", n); // Print the current number again after the second recursive call
    return 0; // Return 0 to indicate the end of the function
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    zigzag(n);
    return 0;
}