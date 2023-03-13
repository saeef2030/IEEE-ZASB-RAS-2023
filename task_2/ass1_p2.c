#include <stdio.h>
void main(){
    int k =0x3EF110;
    int *ptr = &k;
    printf("ptr= %x & *ptr= %x\n",ptr,*ptr);

    *ptr++;               //*ptr++ >>>>effectively dereferences the pointer, then increments the pointer<<<<<<<
    printf("ptr= %x & *ptr= %x \n",ptr,*ptr);
 
    ++*ptr;              //++*ptr >>>>effectively dereferences the pointer, then increments dereferenced value<<<<<
    printf("ptr= %x & *ptr= %x \n",ptr,*ptr);

    *++ptr;             //*++ptr >>>>effectively increments the pointer, then dereferences the pointer<<<<<
    printf("ptr= %x & *ptr= %x \n",ptr,*ptr);
}
 
