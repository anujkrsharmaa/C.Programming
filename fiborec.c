#include<stdio.h>
int fibo(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int recAns = fibo(n - 1) + fibo(n - 2);
    return recAns;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    int x = fibo(n);
    printf("Fibonacci of %d is: %d\n", n, x);
    return 0;
} 