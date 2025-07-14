#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    int sum_even = 0; // 1+3+5+7=16
    int sum_odd = 0; // 2+4+6=12
    for(int i = 0; i < 7; i++) {
        if(i % 2 == 0) { // Check if the index is even
            sum_even += arr[i]; // Add to even indexed sum
        } else {
            sum_odd += arr[i]; // Add to odd indexed sum    
}
    }
    int sum = sum_even - sum_odd; // Calculate total sum of the array elements
    printf("%d", sum); // Print the total sum
    return 0; // Return 0 to indicate successful execution
}