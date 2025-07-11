#include<stdio.h>
void sum(int n , int s){
    // int s = 0;
    // for(int i=1;  i <= n; i++){
    //     s = s + i;
    // }
    // printf("%d\n", s);

    if(n == 0)return;
    sum(n - 1, s + n);
    if(n == 1) {
        printf("%d\n", s + n);
    }
    return;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    sum(n,0);
    return 0;
}