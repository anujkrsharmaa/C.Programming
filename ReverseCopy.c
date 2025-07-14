#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    int brr[7]; // Declare another array of the same size
    for(int i = 0; i < 7; i++){
        brr[i] = arr[6-i]; // Copy elements from arr to brr in reverse order
    }
    for(int i = 0; i < 7; i++){
        arr[i] = brr[i]; // Print the elements of the original array
    }
    for(int i = 0; i < 7; i++){
        printf("%d ", brr[i]); // Print the elements of the reversed array
    }
    return 0; // Return 0 to indicate successful execution
}