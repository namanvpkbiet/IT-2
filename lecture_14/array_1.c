#include<stdio.h>
int main(){
    // arrayko declare karna
    int arr[5];
    // input lena hai
    printf("Enter the elements:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    // output
    printf("The output is:\n");
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}