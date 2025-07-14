#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // Declare and initialize an array of size 8
    int totalpairs = 0;
    int x = 7; // Define the target sum for pairs
    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 8; j++){
            if(arr[i] + arr[j] == x){
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]); // Print the pair that sums to x
                totalpairs++; // Increment the count of pairs found
            }
        }
    }
    printf("Total pairs found: %d\n", totalpairs); // Print the total number of pairs found
    return 0; // Return 0 to indicate successful execution
}