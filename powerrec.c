#include<stdio.h>
int power(int a, int b){
    // int x = 1;
    // for(int i = 1; i < b; i++){
    //     a = x * a;
    // }
    // return a;

    if(b==0) return 1;
    int recAns = a * power(a, b - 1); 
    return recAns;
}
int main(){
    int a;
    printf("Enter base: ");
    scanf("%d", &a);
    int b;
    printf("Enter power: ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d raised to the power %d is: %d\n", a, b, p);
    return 0;
}