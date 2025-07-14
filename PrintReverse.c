#include<stdio.h>
int main(){
    int arr[5]; // Declare an array of size 5
    for(int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1); // Prompt the user to enter a number
        scanf("%d", &arr[i]); // Read 5 integers from the user into the array
    }   
    printf("Array in reverse order:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d ", arr[i]); // Print the elements of the array in reverse order
    }
    printf("\n");
    return 0;
}