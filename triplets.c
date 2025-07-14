#include<stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8}; // Declare and initialize an array of size 8
    int totaltriplets = 0;
    int x = 12; // Define the target sum for pairs
    for(int i = 0; i < 8; i++){
        for(int j = i + 1; j < 8; j++){
            for(int k = j + 1; k < 8; k++){ // Loop through the array to find pairs
                if(arr[i] + arr[j] + arr[k] == x){
                printf("Triplet found: (%d, %d, %d)\n", arr[i], arr[j], arr[k]); // Print the triplet that sums to x
                totaltriplets++; // Increment the count of triplets found
            }
        }
    }
}
 printf("Total pairs found: %d\n", totaltriplets); // Print the total number of pairs found
    return 0; // Return 0 to indicate successful execution
}
