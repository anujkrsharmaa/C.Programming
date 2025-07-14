#include<stdio.h>
int main(){
    int arr[5] = {1, 4, 3, 4, 5}; // Declare and initialize an array of size 5
    printf("%p\n", &arr[1]); // Print the first element of the array
    printf("%p\n", &arr[2]); // Print the first element of the array
    printf("%p\n", &arr[3]); // Print the first element of the array
    printf("%p\n", &arr[4]); // Print the first element of the array
    printf("%p\n", &arr[0]); // Print the first element of the array
    printf("%p\n", arr); // Print the address of the array  
    return 0; // Return 0 to indicate successful execution
}