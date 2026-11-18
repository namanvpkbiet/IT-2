#include<stdio.h>
int main(){
    // char name[20];
    // printf("input is:\n");
    // scanf("%19s",&name);
    // printf("Output is:\n");
    // printf("%s",name);
    // Method 1 for taking input including whitespace
    char name[50];
    printf("Input is:\n");
    scanf("%[^\n]",&name);
    printf("Output is:\n");
    printf("%s",name);
    // Method 2 for taking input including whitespace
    char name_1[50];
    printf("Input is:\n");
    // fgets(array_name,size,stdin);
    fgets(name_1,sizeof(name_1),stdin);
    printf("Output is:\n");
    printf("%s",name_1);
    return 0;
}