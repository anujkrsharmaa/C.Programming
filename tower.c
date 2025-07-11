#include<stdio.h>
void tower(int n , char src, char dest, char aux) {
    // Base case: if there is only one disk, move it directly from source to destination
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", src, dest);
        return;
    }
    
    // Move n-1 disks from source to auxiliary peg
    tower(n - 1, src, aux, dest);
    
    // Move the nth disk from source to destination peg
    printf("Move disk %d from %c to %c\n", n, src, dest);
    
    // Move the n-1 disks from auxiliary peg to destination peg
    tower(n - 1, aux, dest, src);
    
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    tower(n , 'A', 'C', 'B'); // A is source, C is destination, B is auxiliary
    printf("All disks moved from A to C\n");
    return 0;
}