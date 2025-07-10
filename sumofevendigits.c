#include<stdio.h>
int main(){
    int n, lastdigit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0){
        lastdigit = n % 10;
        if (lastdigit % 2 == 0) {
            sum += lastdigit;
        }
        n = n / 10;
    }
    printf("The sum of the even digits is: %d\n", sum);
    return 0;
}