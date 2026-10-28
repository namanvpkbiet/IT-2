#include<stdio.h>
int main(){
    int n;
    printf("Enter the number n:\n");
    scanf("%d",&n);
    // outer loop
    for(int i=1;i<=n;i++){
        // inner loop
        for(int j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}