#include<stdio.h>
void decreasing(int n){
    if(n == 0) return;
    printf("%d\n", n);
    decreasing(n - 1);
    return; 
}
void increasing(int n){
    if(n==0) return;
    increasing(n - 1);
    printf("%d\n", n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing(n);
    increasing(n);
    return 0;
}