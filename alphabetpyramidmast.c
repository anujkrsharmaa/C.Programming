#include<stdio.h>
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int nst = n;
    int nsp = 1;
    for(int i=1; i<=2*n+1; i++){
        printf("%c", 'A' + i - 1);
    }
    printf("\n");
    for(int i=1; i<=n; i++){
      for(int j=1; j<=nst; j++){
        printf("%c", 'A' + j - 1);
     }
    for(int k=1; k<=nsp; k++){
        printf(" ");
    }
    for(int j=1; j<=nst; j++){
        printf("%c", 'A' + j - 1);
    }
    nst--;
    nsp+=2;
    printf("\n");
}

    return 0;
}