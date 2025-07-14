#include<stdio.h>
void fun(int arr[]) {
    int temp = arr[0]; // Store the first element of the array
    arr[0] = arr[1]; // Change the first element to the second element
    arr[1] = temp; // Change the second element to the first element
    return; // Return from the function
}
int main(){
    int arr[5] = {1,3}; // Declare and initialize an array of size 5
    printf("%d %d\n", arr[0],arr[1]); // Print the address of the second element
    fun(arr); // Call the function to print the address of the array
    printf("%d %d\n", arr[0],arr[1]); // Print the address of the first element
    return 0; // Return 0 to indicate successful execution
}