#include<stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int b;
    printf("Enter b number: ");
    scanf("%d", &b);
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}