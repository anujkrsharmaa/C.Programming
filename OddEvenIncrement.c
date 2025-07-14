#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    for(int i = 0; i <= 6; i++) {
        if(i%2!=0) { // Check if the element is even
            arr[i] *= 2; // Increment even elements by 1
        } else {
            arr[i] += 10; // Increment odd elements by 2
        }
    }
    printf("Modified array: ");
    for(int i = 0; i <= 6; i++) {
        printf("%d ", arr[i]); // Print the modified elements of the array
}
    printf("\n");
    return 0; // Return 0 to indicate successful execution
}