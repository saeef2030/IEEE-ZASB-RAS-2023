#include <stdio.h>
#include <string.h>
int main()
{
   char x[1000],y[1000];  
    int i;
    printf("Enter your word sir: ");
    gets(x);
    strcpy(y,x);
    printf("original word is=%s",x);
    printf("\ncopied word is=%s",y);
}