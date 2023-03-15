#include <stdio.h>
typedef struct student_info{
  int roll_number;
  char* name;
  int age;
  char* address;
  double mark;
} info;

void main(){
  info data[15]={
    {1 ,"Aiad", 22 ,"zagazig", 18.5 },{2 ,"Aya", 22 ,"zagazig", 15.5 },{3 ,"Eyad", 22 ,"zagazig", 13 },{4 ,"Samir", 22 ,"zagazig", 20 },{5 ,"Salma", 22 ,"zagazig", 20 },
    {6 ,"Seif", 22 ,"zagazig", 20 },{7 ,"Ahmed", 22 ,"zagazig", 12 },{8 ,"Kareem", 22 ,"zagazig", 11 },{9 ,"Islam", 22 ,"zagazig", 10.5 },{10 ,"Fouad", 22 ,"zagazig", 9 },
    {11 ,"Shimaa", 22 ,"zagazig", 20 },{12 ,"Sawsan", 22 ,"zagazig", 7 },{13 ,"Alaa", 22 ,"zagazig", 11 },{14 ,"Shahd", 22 ,"zagazig", 20 },{15 ,"Noor", 22 ,"zagazig", 20 } };

    printf("<<<<<<<<<<<<2'nd Electric Student's Informations>>>>>>>>>>>>>>>>\n");
    for(int i = 0; i <15 ; i++){
        printf("Roll number = %d\n", data[i].roll_number);
        printf("Name = %s\n", data[i].name);
        printf("Age = %d\n", data[i].age);
        printf("Address = %s\n", data[i].address);
        printf("Mark = %.2f\n", data[i].mark);
        printf("*************************************************************\n");
    }
}