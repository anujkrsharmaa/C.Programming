// #include<stdio.h>
// int main(){ // GP 2nd
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a = 1;
//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         a = a * 2;
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){ // GP 3rd
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int a = 3;
//     for(int i=1; i<=n; i++){
//         printf("%d ", a);
//         a = a * 4;
//     }
//     return 0;
// }



#include<stdio.h>
int main(){ // GP 100, 50, 25, ...
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int a = 100;
    for(int i = 1; i <= n; i++){
        printf("%d ", a);
        a = a / 2;
    }
    return 0;
}
