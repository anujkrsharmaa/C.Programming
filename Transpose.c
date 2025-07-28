#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    int c;
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    printf("Enter the elements of the matrix:\n");
    int arr[r][c];
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            arr[i][j] *= arr[i][j]; // squaring each element
        }
    }
    printf("\n");
    for(int i = 0; i<c; i++){
        for(int j = 0; j<r; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}