#include<stdio.h>
struct info
{
    char *name;
    int age;
};
int main(){
    struct info man = {"Salah EL Deen",72};
    struct info *ptr =&man;
    printf("The Name of man is  : %s   &   His Age is : %d",ptr->name,ptr->age);
}