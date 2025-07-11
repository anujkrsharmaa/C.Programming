#include<stdio.h>
int power(int a, int b){
    if(b == 0) return 1;
    if(b == 1) return a;
    if(b < 0) return 1 / power(a, -b); // Handle negative powers
    if(b % 2 == 0) {
        int halfPower = power(a, b / 2);
        return halfPower * halfPower; // Even power: square the result of half power
    } else {
        int halfPower = power(a, b / 2);
        return halfPower * halfPower * a; // Odd power: square the result of half power and multiply by a
    }   
}
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter the power: ");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d raised to the power %d is: %d\n", a, b, p);
    return 0;
}
   