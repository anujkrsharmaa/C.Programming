#include<stdio.h>
#include<stdbool.h> // Include stdbool.h for boolean type
int main(){
    int arr[7] = {1, 2, 5, 6, 5, 6, 7}; // Declare and initialize an array of size 7
    for(int i = 0; i <= 6; i++){
        bool flag = false; // Initialize a flag to check for duplicates
        for(int j = i + 1; j <= 6; j++){
            if(arr[i] == arr[j]){ // Check for duplicate elements
                printf("Duplicate element found: %d\n", arr[i]); // Print the duplicate element
                flag = true; // Set the flag to true if a duplicate is found
            }
        }
        if(flag==false){
            printf("No duplicate for element %d\n", arr[i]); // Print if no duplicate is found for the current element
            break; // Exit the inner loop if no duplicate is found
        }
    }
    return 0; // Return 0 to indicate successful execution
}