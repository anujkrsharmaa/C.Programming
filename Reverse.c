#include<stdio.h>
void reverse(int arr[] , int si, int ei) {  
//    while (i<j) { // Loop until the two indices meet
//         int temp = arr[i]; // Store the value at index i
//         arr[i] = arr[j]; // Swap the values at indices i and j
//         arr[j] = temp; // Assign the stored value to index j
//         i++; // Move to the next element from the start
//         j--; // Move to the previous element from the end
// }
    for(int i = si, j = ei; i < j; i++, j--) { // Loop to reverse elements from index 1 to 5
        int temp = arr[i]; // Store the value at index i
        arr[i] = arr[j]; // Swap the values at indices i and j
        arr[j] = temp; // Assign the stored value to index j
    }
    return; // Return from the function
} 
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    reverse(arr,0,6); // Call the reverse function to reverse elements from index 1 to 5
    // index 1-4 reverse
    // for(int i = 1, j = 4; i < j; i++, j--) { // Loop to reverse elements from index 1 to 4
    //     int temp = arr[i]; // Store the value at index i
    //     arr[i] = arr[j]; // Swap the values at indices i and j
    //     arr[j] = temp; // Assign the stored value to index j
    // }
    for(int i = 0; i <= 7; i++){
        printf("%d ", arr[i]); // Print the elements of the reversed array
    }
    return 0; // Return 0 to indicate successful execution
}