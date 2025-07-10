#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x; // temp = 5
   *x = *y; // *x = 10
   *y = temp;  // *y = 5
   // Now a = 10 and b = 5
    return;
}
int main(){
    int a = 5;
    int b = 10;
    swap (&a,&b);
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    return 0;
}
