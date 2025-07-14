#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 6, 4, 5, 6, 7}; // Declare and initialize an array of size 7
    for(int i = 0; i <= 6; i++){
        for(int j= i + 1; j <= 6; j++){
            if(arr[i] == arr[j]){ // Check for duplicate elements
                printf("Duplicate element found: %d\n", arr[i]); // Print the duplicate element
                break; // Exit the inner loop after finding a duplicate
            }
        }
    }
    return 0; // Return 0 to indicate successful execution
}