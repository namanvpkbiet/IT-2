#include<stdio.h>
struct details{
    char name[50];
    int age;
};
int main(){
    struct details person;
    scanf("%[^\n]",&person.name);
    person.age=18;
    printf("%s\n",person.name);
    printf("%d",person.age);
    return 0;
}