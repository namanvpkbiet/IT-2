#include<stdio.h>
int main(){
    int a=10;
    int arr[]={1,2,3,4,5};
    printf("%d",sizeof(arr)/sizeof(arr[0]));
    return 0;
}