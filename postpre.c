// #include<stdio.h>
// int main(){ // 1st question
//     int x = 5;
//     printf("%d\n", x);
//     printf("%d\n", ++x); // x++ means, use x, then increment 
//     // ++x means, increment then use 
//     return 0;
// }



// #include<stdio.h>
// int main(){  // 2nd question
//     int x = 4, y = 3, z;
//     z = x --- y;
//     printf("%d %d %d\n", x, y, z);
//     return 0;
// }



// #include<stdio.h>
// int main(){ // 3rd question
//    while ('a' < 'b')
//         printf("\nmalyalam is a palindrome");
//     return 0;
// }




// #include<stdio.h>
// int main(){ // 4th question
//     int i = 10;
//    while (i = 20)
//         printf("\n A computer buff");
//     return 0;
// }




// #include<stdio.h>
// int main(){ // 5th question
//     int i ;
//    while (i = 10){
//     printf("\n%d",i);
//     i = i + 1;
//    }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int x = 4, y = 0, z;
//     while(x >= 0){
//         x--;
//         y++;
//         if (x == y)
//         continue;
//         else
//         printf("%d %d\n", x, y);
//     }
//     return 0;
// }





#include<stdio.h>
int main(){
    int x = 4, y = 0, z;
    while(x >= 0){
        if (x == y)
        break;
        else
        printf("%d %d\n", x, y);
        x--;
        y++;
    }
    return 0;
}