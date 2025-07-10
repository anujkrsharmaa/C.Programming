// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a = 100;
//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         a = a - 3;
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    float a = 100;
    float r = 0.5;
    for(int i=1; i<=n; i++){
        printf("%.2f ", a);
        a = a * r;
    }
    return 0;
}