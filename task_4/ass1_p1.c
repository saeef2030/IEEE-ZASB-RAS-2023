#include <stdio.h>
typedef struct student_info{/* Bit fields must be declared as unsigned int or int.
 The maximum value that can store in unsigned int filed is (2 power n) - 1
 and in int filed is 2 power ( n - 1)
 Bit fields occupy a specified number of adjacent bits from one to sizeof(int).
We cannot have pointers to bit field members
Array of bit fields is not allowed.
*/
  unsigned int roll_number: 4; //so 4 bits take range (0 to 15)
  unsigned int age: 8; //8 bits range (0 to 255)  
  unsigned int mark: 3; //3bits range (0 to 7)
  char* name; //8 bytes
  char* address; //8 bytes

} info;
void show_data(info data[15]){
    printf("<<<<<<<<<<<<2'nd Electric Student's Informations>>>>>>>>>>>>>>>>\n");
    for(int i = 0; i <15 ; i++){
        printf("Roll number = %d\n", data[i].roll_number);
        printf("Name = %s\n", data[i].name);
        printf("Age = %d\n", data[i].age);
        printf("Address = %s\n", data[i].address);
        printf("Mark = %d\n", data[i].mark);
        printf("*************************************************************\n");
    }
}
void main(){
  info data[15]={
    {1 ,22,5,"REEM","zagazig" },{2 ,22,4,"Aya","zagazig"},{3 ,22,1,"saad","zagazig"},{4 ,22,1,"Samir","zagazig" },{5 ,22,1,"karrem","zagazig" },
    {6 ,22,3,"Seif","zagazig" },{7 ,22,1,"Ahmeed","zagazig" },{8 ,22,1,"aya","zagazig" },{9 ,22,1,"islam","zagazig" },{10 ,22,1,"Shimaa","zagazig" },
    {11 ,22,1,"Shimaa","zagazig" },{12 ,22,1,"Salma","zagazig" },{13 ,22,1,"Ali","zagazig" },{14 ,22,1,"Shimaa","zagazig" },{15 ,22,1,"AlI","zagazig" }};
 show_data(data);
printf("Size of struct is: %d bytes",sizeof(info));
}