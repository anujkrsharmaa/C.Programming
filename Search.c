#include<stdio.h>
#include<stdbool.h> // Include stdbool.h for boolean type
// void reverse(int arr[] , int si, int ei) {  
//     for(int i = si, j = ei; i < j; i++, j--) { // Loop to reverse elements from index 1 to 5
//         int temp = arr[i]; // Store the value at index i
//         arr[i] = arr[j]; // Swap the values at indices i and j
//         arr[j] = temp; // Assign the stored value to index j
//     }
//     return; // Return from the function
//}
int main(){
    int arr[7] = {12, 51, 36, 47, 51, 63, 74}; // Declare and initialize an array of size 7
    int x = 51;
    bool flag = false; // Initialize a flag to check if the element is found
    for(int i = 0; i < 7; i++) {
        if(arr[i] == x) { // Check if the current element is equal to x
            printf("Element %d found at index %d\n", x, i); // Print the index of the found element
            flag = true; // Set the flag to true if the element is found
            break; // Exit the loop once the element is found
        }
    }
    if(flag==false) { // If the flag is still false, the element was not found
        printf("Element %d not found in the array\n", x); // Print that the element was not found
    }
    else {
        printf("Element %d found in the array\n", x); // Print that the element was found
    }
    return 0; // Return 0 to indicate successful execution
}