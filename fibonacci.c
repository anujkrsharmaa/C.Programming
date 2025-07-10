// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//    int a = 1;
//    int b = 1;
//    int sum = 1;
//    for(int i=1; i<=n-2; i++){
//     sum = a+b;
//     a = b;
//     b = sum;
//    }
//    printf("The fibonacci of %d is %d",n,sum);
//     return 0;
// }




#include<stdio.h>
int main(){  // print first 'n' fibonacci numbers. HW
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int a = 0;
    int b = 1;
    int c = 0;
    printf("Fibonacci series: %d %d ", a, b);
    for (int i = 2; i <= n; i++){
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
    return 0;
}