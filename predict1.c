// #include<stdio.h>
// int main(){
//     int j;
//    while (j< 100){ //condition likhi hoti hai, jab hume jyada cheeze na pata ho
//         printf("%d\n ", j); // Print odd numbers
//         j = j + 1;
//     }
//     return 0;
// }




// #include<stdio.h>
// int main(){
//     int x = 1;
//     while (x==1){
//         x = x-1;
//         printf("%d\n", x);
//     }
//     return 0;
// }



#include<stdio.h>
int main(){
    int x =4,y,z;
    y = --x;
    z = x--;
    printf("%d %d %d\n", x, y, z);
    return 0;
}