#include<stdio.h>
int main(){
    int arr[5] = {1, 4, 3, 4, 5}; // Declare and initialize an array of size 5
    int sum = 0; // Initialize sum variable to store the sum of array elements
    for(int i = 0; i < 5; i++) {
        sum = sum + arr[i]; // Add each element of the array to sum         

    }
    printf("Sum of array elements: %d\n", sum); // Print the sum of the array elements
    return 0; // Return 0 to indicate successful execution
}