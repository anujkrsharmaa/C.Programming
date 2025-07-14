#include<stdio.h>
int main() {
int arr[5]; // Declare an array of size 5
// int arr[5] = {1, 4, 3, 4, 5}; // Declare and initialize an array of size 5
// arr[4] = 10; // Change the last element of the array to 10
// arr[1] = 20; // Change the second element of the array to 20
for(int i = 0; i<=4; i++) {
    printf("Enter number : %d\n ", i + 1); // Prompt the user to enter a number
    scanf("%d", &arr[i]); // Read 5 integers from the user into the array
}   
printf("Enter last number is : %d\n", arr[4]); // Print the first element of the array
return 0;
}