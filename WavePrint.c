#include<stdio.h>
int main(){
     int m;
    printf("Enter no of rows of 1st matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter no of columns of 1st matrix : ");
    scanf("%d", &n);
    int arr[m][n];
    printf("Enter the elements of the 1st matrix:\n");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    //wave print
    for(int i = 0; i<n; i++){
        if(i % 2 == 0){ // even column index
            for(int j = 0; j<m; j++){
                printf("%d ", arr[j][i]);
            }
        } else { // odd column index
            for(int j = m-1; j>=0; j--){
                printf("%d ", arr[j][i]);
            }
        }
    }
    printf("\n");
    return 0; // This file is intended to be a placeholder for the WavePrint functionality.
}