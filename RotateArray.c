#include<stdio.h>
void reverse(int arr[] , int si, int ei) {  
    for(int i = si, j = ei; i < j; i++, j--) { // Loop to reverse elements from index 1 to 5
        int temp = arr[i]; // Store the value at index i
        arr[i] = arr[j]; // Swap the values at indices i and j
        arr[j] = temp; // Assign the stored value to index j
    }
    return; // Return from the function
} 
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    int k = 3;
    int n = 7; // Size of the array
    k = k%n;
    reverse(arr,0,n-1); // Call the reverse function to reverse elements from index 1 to 5
    reverse(arr,0,k-1); // Reverse the first n-k elements
    reverse(arr,k,n-1); // Reverse the last k elements
    for(int i = 0; i <= 7; i++){
        printf("%d ", arr[i]); // Print the elements of the reversed array
    }
    return 0; // Return 0 to indicate successful execution
}