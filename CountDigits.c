#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: "); 
    scanf("%d", &n);
    int count = 0;
    while (n != 0){
        n = n / 10; // Remove the last digit
        count++; // Increment the count
    }
    printf("The number of digits is: %d\n", count);
    return 0;
}