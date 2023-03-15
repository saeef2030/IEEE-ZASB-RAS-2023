#include<stdio.h>
int x;
struct student_info
{
    char name[100];
    char address[100];
    int age;
    int roll_number;
    float mark;
}data[100];
void clc(struct student_info data[x]){
    int y =0;
    printf("<<<<<<<<<<<<2'nd Electric Student's Informations>>>>>>>>>>>>>>>>\n");
    printf("*******************************************************************\n");
    for(int i = 0; i<x ;i++){
        printf("Student %d Roll Number : %d \n",i,data[i].roll_number);
        printf("Student %d Name : %s \n",i,data[i].name);
        printf("Student %d Age : %d\n",i,data[i].age);
        printf("Student %d Address : %s\n",i,data[i].address);
        printf("Student %d Mark : %0.1f\n",i,data[i].mark);
        printf("*******************************************************************\n");
        if (data[i].mark <12){
        y++;}
    }
    printf("Number of students gets mark less than 12 = %d",y);
}
int main(){
    printf("Enter the number of students:");
    scanf("%d",&x);
    for(int i = 0; i<x ;i++){
        printf("Enter Student %d Roll Number : ",i+1);
        scanf("%d",&data[i].roll_number);
        printf("Enter Student %d Name : ",i+1);
        scanf("%s",data[i].name);
        printf("Enter Student %d Age : ",i+1);
        scanf("%d",&data[i].age);
        printf("Enter Student %d Address : ",i+1);
        scanf("%s",data[i].address);
        printf("Enter Student %d Mark : ",i+1);
        scanf("%f",&data[i].mark);
        printf("*******************************************************************\n");
    }
    clc(data);
}
