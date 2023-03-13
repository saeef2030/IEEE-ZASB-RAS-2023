#include <stdio.h>
int v=9;
extern int inc_fi5();//importing function from fi5.c file,,adding extern keyword is pointless as it is by default
extern int inc_fi4();//importing function from fi4.c file,,adding extern keyword is pointless as it is by default
int main()
{
 printf("\n v before call inc_fun= %d",v);
 inc_fi5();
 printf("\n v after call inc_fun= %d",v);
 inc_fi4();
 printf("\n v after call inc_fi4= %d",v);

 auto int x=100;//The auto storage-class specifier declares an automatic (local) variable.
//This is the default storage class for variables declared inside a function or a block.
//By default every local variable is declared as auto , so adding auto keyword is pointless.

 register int g=40;
 printf("Address Of x = %d\n", &x); // X is stored in memory.
 //printf("Address Of g = %d", &g); // error as g is stored in CPU regiter so we can't Print The address it

 try_s();
 try_s();
 try_s();
 return 0;
}

int try_s()
{
    int local_vari=8;
    static int static_vari=2;
    local_vari++;
    static_vari++;
    printf("\n local_vari= %d \t static_vari= %d",local_vari,static_vari);
}
