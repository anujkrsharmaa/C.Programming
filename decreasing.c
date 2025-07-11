#include<stdio.h>
// void greeting(int n){
//     for(int i = 1; i <= n; i++){
//         printf("Good Morning\n");
//     }
//     return;
// }

void decreasing(int n){
    if(n == 0) return;
    printf("%d\n", n);
    decreasing(n - 1);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing(n);
    return 0;
}