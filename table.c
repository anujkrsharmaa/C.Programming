// #include<stdio.h>
// int main(){ //19 table
//     for(int i=19; i<=190; i=i+19){
//             printf("%d ", i);
//         }
//     return 0;
// }



#include<stdio.h>
int main(){ // all no table
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i = 1; i <=10; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}
