// #include<stdio.h>
// int main(){
//     int n;
//     int m;
//     printf("Enter the number of rows: ");
//     scanf("%d",&n);
//     printf("Enter the number of  columns: ");
//     scanf("%d",&m);
//     //********......upto n number of stars */
//     for(int i=1;i<=n;i++){ // outer loop --> no of lines
//         for(int j=1;j<=m;j++){ // inner loop --> no of stars in each line 
//             printf("* ");
//         }
//         printf("\n"); //hare line after printing stars
//     }
//     printf("The pattern is printed successfully.\n");
//     return 0;
// }




#include<stdio.h>
int main(){ // hw 
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    for(int i=1; i<=4; i++){
        for(int j=1; j<=4; j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}