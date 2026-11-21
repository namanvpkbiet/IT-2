#include<stdio.h>
int factorial(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    n=n+1;
    printf("%d\n",n);
    return f;
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    printf("The factorial of number is %d\n",factorial(n));
    printf("%d\n",n);
    return 0;
}

