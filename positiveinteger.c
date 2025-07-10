#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    printf("Enter 4th number: ");
    scanf("%d", &d);

    if(a > b && a > c && a > d){
        printf("%d is the largest number", a);
    }
    else if(b > a && b > c && b > d){
        printf("%d is the largest number", b);
    }
    else if(c > a && c > b && c > d){
        printf("%d is the largest number", c);
    }
    else{
        printf("%d is the largest number", d);
    }
    return 0;
}