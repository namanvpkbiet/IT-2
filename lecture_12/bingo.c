#include<stdio.h>
int main(){
    // row=5 and column=5
    // outer loop
    int num=1;
    for(int i=1;i<=5;i++){
        // inner loop
        for(int j=1;j<=5;j++){
            printf("%d ",num);
            num=num+1;
        }
        printf("\n");
    }
    return 0;
}