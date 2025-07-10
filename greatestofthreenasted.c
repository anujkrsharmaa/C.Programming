#include<stdio.h>
int main(){
    int a;
    int b;
    int c;
    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);
    printf("Enter 3rd number: ");
    scanf("%d", &c);
    if(a > b){ // b is out of race
        if(a>c){
            printf("%d is greatest", a);
        }
        else{ // a<c
            printf("%d is greatest", c);
        }
    }
    else{ // b > a --> a is out of race
        if(b>c){
            printf("%d is greatest", b);
        }
        else{ // b<c
            printf("%d is greatest", c);
        }
    }       
    return 0;
}