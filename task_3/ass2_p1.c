#include<stdio.h>
#include<string.h>
struct Date{
    char day[100];
    char month[100];
    char year[100];
}date1, date2;

void main(){ int x,y,z;
    printf("Enter The Day of the First Date:\n");
    scanf("%s",date1.day);
    printf("Enter The Month of the First Date:\n");
    scanf("%s",date1.month);
    printf("Enter The Year of the First Date:\n");
    scanf("%s",date1.year);
    printf("********************************************************\n");
    printf("Enter The Day of the Second Date:\n");
    scanf("%s",date2.day);
    printf("Enter The Month of the Second Date:\n");
    scanf("%s",date2.month);
    printf("Enter The Year of the Second Date:\n");
    scanf("%s",date2.year);
    x = strcmp(date1.day,date2.day);
    y = strcmp(date1.month,date2.month);
    z = strcmp(date1.year,date2.year);
    if (x == 0 && y == 0 && z == 0)
        printf("Dates are equal");
    else
        printf("Dates are not equal");
}
