#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n); 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n){ // first and last line
                printf("* ");
            }
            else{
                printf("  "); // inside space
            }
        }
        printf("\n");
    }
}