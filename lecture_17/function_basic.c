#include<stdio.h>
// datatype function_name(parametr/arguement){}
// add two numbers
int sum(int a,int b){
    int c=a+b;
    return c;
}
int main(){
    int a=10;
    int b=20;
    printf("%d\n",sum(a,b));
    printf("%d\n",sum(10,30));
    printf("%d\n",sum(89,57));
    return 0;
}