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
    
    int p;
    printf("Enter no of columns of 2nd matrix : ");
    scanf("%d", &p);
    int q;
    printf("Enter no of rows of 2nd matrix : ");
    scanf("%d", &q);
    int brr[p][q];
    printf("Enter the elements of the 2nd matrix:\n");
    for(int i = 0; i<p; i++){
        for(int j = 0; j<q; j++){
            scanf("%d", &brr[i][j]);
        }
    }
    
    int res[m][q]; // Resultant matrix of size m x q
    // Matrix multiplication
    for(int i = 0; i<m; i++){
        for(int j = 0; j<q; j++){
            res[i][j] = 0; // Initialize the result matrix
            for(int k = 0; k<n; k++){
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
    
    // Output the resultant matrix
    printf("Resultant matrix after multiplication:\n");
    for(int i = 0; i<m; i++){
        for(int j = 0; j<q; j++){
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
    return 0;
}