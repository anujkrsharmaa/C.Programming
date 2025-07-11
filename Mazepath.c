#include<stdio.h>
int maze(int cr, int cc, int er, int ec) {
    // Base case: if we reach the end cell
    if (cr == er && cc == ec) {
        return 1; // Found a valid path
    }
    // If we go out of bounds, return 0
    if (cr > er || cc > ec) {
        return 0; // Invalid path
    }
    
    // Move down and right recursively
    int down = maze(cr + 1, cc, er, ec);
    int right = maze(cr, cc + 1, er, ec);
    
    // Return the total number of ways to reach the destination
    return down + right;
}
int main(){
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int noOfWays = maze(1, 1, n, m);
    printf("Number of ways to reach the destination: %d\n", noOfWays);
    return 0;
}