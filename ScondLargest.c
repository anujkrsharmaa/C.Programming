#include<stdio.h>
#include<limits.h> // Include limits.h for INT_MIN
int main(){
    int arr[8] = {1, 2, 3, 4, 4, 6, 6, 5}; // Declare and initialize an array of size 8
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i =0; i < 8; i++){
       if(max<arr[i]){
        smax = max;
        max = arr[i];   
       }
       else if(smax < arr[i] && arr[i] != max){
           // Update second largest only if current element is not equal to max
        smax = arr[i];
       }
    }
    printf("Second largest element in the array: %d\n", smax); // Print the second largest element found in the array
    return 0; // Return 0 to indicate successful execution

}