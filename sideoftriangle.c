#include<stdio.h>
int main(){
    int a, b, c, d;
    printf("Enter 1st side: ");
    scanf("%d", &a);
    printf("Enter 2nd side: ");
    scanf("%d", &b);
    printf("Enter 3rd side: ");
    scanf("%d", &c);
    printf("Enter 4th side: ");
    scanf("%d", &d);
    if(a + b > c && a + c > b && b + c > a){
        printf("Triangle is possible");
    }
    else{
        printf("Triangle is not possible");
    }
    if(a == b && b == c){
        printf("Equilateral triangle");
    }
    else if(a == b || b == c || a == c){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
}