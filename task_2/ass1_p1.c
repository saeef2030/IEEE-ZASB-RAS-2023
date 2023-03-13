#include <stdio.h>
int main()
{//>>>>>>>>>>>>>>>>>>>pointers are incremented and decremented by the size of the data type they point to<<<<<<<<<<<<<<<<
    int a = 22;
    int *p1 = &a;
    printf("p1 = %u\n", p1); 
    p1++;
    printf("p1++ = %u that because int variables are stored in (4-byte)\n", p1); 

    long long b= 12345;
    long long *p2 = &b;
    printf("p2 = %u\n", p2); 
    p2++;
    printf("p2++ = %u that because LongLong variables are stored in (8-byte)\n", p2); 

    char c = 's';
    char *p3 = &c;
    printf("p3 = %u\n", p3);   
    p3++;
    printf("p3++ = %u that because character variables are stored in (1-byte)\n", p3); 
}