// #include<stdio.h>
// int main(){
//    for (int i=1; i<=100; i++){
//         if (i % 2 == 0){
//             continue; // Skip even  numbers
//         }
//         printf("%d ", i); // Print even numbers
//    }
//     return 0;
// }


#include<stdio.h>
int main(){
   for (int i=1; i<=100; i++){
        if (i % 3 == 0){
            continue; // Skip odd  numbers
        }
        printf("%d ", i); // Print odd numbers
   }
    return 0;
}