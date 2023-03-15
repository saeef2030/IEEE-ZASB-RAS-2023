#include<stdio.h>
struct data1{
 int Id;//4 bytes
        //4 bytes ,padding
 char *name;//8 bytes
 char class_id;//4 bytes
       //4 bytes ,padding
};
struct data2{
 char *name;//8 bytes
 int Id;//4 bytes
 char class_id;//4 bytes        no padding 
};
int main(){
    printf("The Size of the struct before swampping is :%d" ,sizeof(struct data1));
    printf("\nThe Size of the struct after swampping is :%d" ,sizeof(struct data2));
/* The sizeof for a struct is not always equal to the sum of sizeof of each individual member. 
This is because of the <<<padding>>>> added by the compiler to avoid alignment issues. 
Padding is only added when a structure member is followed by a member with a larger size or at the end of the structure.
And Our Computer stores structure using the concept of word boundary that means Processor doesn't read 1byte at a time 
from memory but it reads 1 word at a time and 1 word size is 8 bytes as the processor is 64 bit 
so at the first struct the first variable is int so it takes 4 byte then we have char*name that takes 8 byte so the 
processor leave the 4 bytes next to the first variable and takes next 8 bytes ,finally we have int that takes 4 bytes 
will take new word(8bytes) next to the last 8 bytes so we have (4+4+8+4+4)=24
the second struct makes the same but(8+4+4) it takes only 2 words otherwise the first struct takes 3 words */
}