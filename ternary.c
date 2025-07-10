#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // Ternary operator
    // exppression  ecpr1 ? expr2 : expr3
    n%2==0 ? printf("Even number") : printf("Odd number");
    //if(n%2==0)
    //    printf("%d is even\n",n);
    //else
    //    printf("%d is odd\n",n);
    return 0;
}