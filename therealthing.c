#include<stdio.h>
int main(){
    if (3 + 2 % 5)
    printf("This works\n");
    if(10)
    printf("Even this works\n");
    if (-5)
    printf("surprisingly even this works\n");
    if('a'){
        printf("This works too\n");
    }
    return 0;
}