#include <stdio.h>
void main(){
    int w =0x3E2F;
    int *ptr = &w;
    printf("ptr= %d & *ptr= %u\n",ptr,*ptr);
    int y=*ptr++;               //*ptr++ >>>>effectively dereferences the pointer, then increments the pointer<<<<<<<
    printf("ptr= %d & *ptr= %u & y=%d\n",ptr,*ptr,y);
    int x=++*ptr;              //++*ptr >>>>effectively dereferences the pointer, then increments dereferenced value<<<<<
    printf("ptr= %d & *ptr= %u & x=%d\n",ptr,*ptr,x);
    int r=*++ptr;             //*++ptr >>>>effectively increments the pointer, then dereferences the pointer<<<<<
    printf("ptr= %d & *ptr= %u & r=%d\n",ptr,*ptr,r);
}
 