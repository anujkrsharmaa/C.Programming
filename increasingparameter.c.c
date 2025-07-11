#include<stdio.h>
// void increasing(int n){
//     for(int i = 1; i<= n; i++){
//         printf("%d\n",i);
//     }
//     return;
// }
void increasing( int x,int n){
    if(x>n) return;
    printf("%d\n", x);
    increasing(x+1, n);
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    increasing(1,n);
    return 0;
}