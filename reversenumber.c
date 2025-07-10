// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: "); 
//     scanf("%d", &n);
//     int r = 0;
//     while (n>0){
//          r = r * 10;
//          r = r + (n%10); // Add the last digit to the sum
//          n = n / 10;  
//     }
//     printf("The reverse number is: %d\n", r);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: "); // 12345
//     scanf("%d", &n);
//     int r = 0;
//     while (n>0){
//          r = r * 10; 
//          r = r + (n%10); // Add the last digit to the sum
//          n = n / 10;  
//     }
//     int sum = 0;
//     printf("The reverse number is: %d\n", r); // 54321
//     while (r != 0){
//         int digit = r % 10; // Store the last digit
//         sum = sum + digit; // Add the last digit to the sum
//         r = r / 10;
//     }
//     printf("The sum of the digits is: %d\n", sum); // 15
//     return 0;
// }


#include <stdio.h>
int main() {
    int num, original, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    int sum = original + reverse;
    printf("Original number: %d\n", original); // 12345
    printf("Reversed number: %d\n", reverse); // 54321
    printf("Sum of original and reversed: %d\n", sum); // 66666
    // 12345 + 54321 = 66666
    return 0;
}