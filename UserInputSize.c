#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n); // Read the size of the array from user input
    int arr[n]; // Declare an array of size n
    for(int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1); // Prompt the user to enter a number
        scanf("%d", &arr[i]); // Read n integers from the user into the array
    }
    printf("You entered: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Print the elements of the array   
}
    printf("\n");
    return 0; // Return 0 to indicate successful execution
}
