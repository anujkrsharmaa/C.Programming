#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    int sum = 0;
    int lastdigit;
    while (n != 0){
        lastdigit = n%10;
        sum = sum + lastdigit; // Add the last digit to the sum
        n = n / 10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}