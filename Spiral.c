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
    // spiral print
    printf("\n");
    int minr = 0, minc = 0, maxr = m - 1, maxc = n - 1;
    int total = m * n;
    int count = 0;
    while(count < total){
        // print the minimum row
        for(int i = minc; i <= maxc && count < total; i++){
            printf("%d ", arr[minr][i]);
            count++;
        }
        minr++;
        //print the maximum column
        for(int i = minr; i <= maxr && count < total; i++){
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
        // print the maximum row
        for(int i = maxc; i >= minc && count < total; i--){
            printf("%d ", arr[maxr][i]);
            count++;
        }
        maxr--;
        // print the minimum column
        for(int i = maxr; i >= minr && count < total; i--){
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
    }
    printf("\n");
    return 0; // This file is intended to be a placeholder for the Spiral functionality.
}
    