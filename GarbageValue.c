#include<stdio.h>
int main(){
    int arr[4];
    printf("%d\n", arr[0]); // Print the first element of the array
    int x;
    printf("%d\n", x); // Print the uninitialized variable
    return 0; // Return 0 to indicate successful execution
} // Note: This code may produce garbage values for arr[0] and x since they