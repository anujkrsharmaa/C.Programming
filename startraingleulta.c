#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){ // no of lines / rows -- i
        for(int j=1;j<=n-i;j++){ // no of columns -- j
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}