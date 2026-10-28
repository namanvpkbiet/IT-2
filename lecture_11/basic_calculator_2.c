#include<stdio.h>
int main(){
    // basic calculator by symbol/character
    printf("Enter the two numbers:\n");
    int a,b;
    printf("enter the first number:\n");
    scanf("%d",&a);
    printf("enter the second number:\n");
    scanf("%d",&b);
    printf("For addition choose +\n");
    printf("For subtraction choose -\n");
    printf("For multiplication choose *\n");
    printf("For division choose /\n");
    printf("Enter your choice:\n");
    char c;
    scanf(" %c",&c);
    switch(c){
        case '+':
            printf("Addition is %d\n",a+b);
            break;
        case '-':
            printf("Subtraction is %d\n",a-b);
            break;
        case '*':
            printf("Multiplication is %d\n",a*b);
            break;
        case '/':
            printf("Division is %d\n",a/b);
            break;
        default:
            printf("please select the above options\n");
    }
    return 0;
}