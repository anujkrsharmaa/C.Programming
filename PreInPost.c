#include<stdio.h>
int PreInPost(int n){
    // Base case: if n is 0, return
    if(n == 0) return 0;
    printf("Pre: %d\n", n); // Pre-order traversal
    PreInPost(n - 1); // Recursive call for left subtree
    printf("In: %d\n", n); // In-order traversal
    PreInPost(n - 1); // Recursive call for right subtree
    printf("Post: %d\n", n); // Post-order traversal
    // Return 0 to indicate the end of the function
    return 0;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    PreInPost(n);
    return 0;
}