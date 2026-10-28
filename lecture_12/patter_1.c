#include<stdio.h>
int main(){
    // row=5 and column=5
    // outer loop 
    // row par kaam karega
    for(int i=1;i<=4;i++){
        // inner loop 
        // joh harek row par jaake kaam karega
        for(int j=1;j<=7;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}