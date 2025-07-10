#include<stdio.h>
int main(){
    int a = 5;
    int * x = &a; // Pointer to an integer
    int ** y = &x; // Pointer to a pointer to an integer
    // vvip ->* x = 10; // Change the value of a using pointer x
    printf("%d\n",a); // Print the address of a
    printf("%d\n",*x); // Print the address stored in pointer p
    printf("%d\n", **y); // Print the value pointed to by p
    return 0;
}