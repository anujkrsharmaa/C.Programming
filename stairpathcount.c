#include<stdio.h>
int stair(int n){
    if(n==0 || n==1) return 1; // Base case: 1 way to reach the top if there are 0 or 1 steps
    if(n==2) return 2; // Base case: 2 ways to reach the top if there are 2 steps
    int recAns = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return recAns; // Recursive case: sum of ways to reach the top from the last 3 steps
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("Number of ways to reach the top of the stairs: %d\n", ways);
    return 0;
}