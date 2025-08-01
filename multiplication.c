#include<stdio.h>
int main(){
    // 1 2
    // 3 4
    // 5 6
    // This is a 3x2 matrix
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    // 1 2 3 4
    // 5 6 7 8
    // This is a 2x4 matrix
    int brr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    int res[3][4]; // Resultant matrix of size 3x4
    // Matrix multiplication
    int cr = 2; // Number of columns in arr and rows in brr
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            // i row of arr and j column of brr
            // res[i][j] = arr[i][0]*brr[0][j] + arr[i][1]*brr[1][j];
            res[i][j] = 0; // Initialize the result matrix
            for(int k = 0; k<cr; k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    // Output the resultant matrix
    printf("Resultant matrix after multiplication:\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}