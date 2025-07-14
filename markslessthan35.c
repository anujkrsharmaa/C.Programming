#include<stdio.h>
int main(){
    int marks[10] = {45, 32, 28, 50, 60, 20, 70, 80, 90, 10}; // Declare and initialize an array of size 10
    for(int i = 0; i<10; i++){
        if(marks[i] < 35){ // Check if the mark is less than 35
            printf("Marks less than 35: %d\n",marks[i]); // Print the marks that are less than 35
        }
    }
    return 0; // Return 0 to indicate successful execution
}