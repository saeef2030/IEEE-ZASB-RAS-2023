#include<stdio.h>
typedef int my_int;
typedef short my_short;
typedef long my_long;
typedef float my_float;
typedef double my_double;
typedef char my_char;
typedef unsigned char my_unsigned_char;
typedef unsigned int my_unsigned_int;
int main()
{
printf(" the size of integar is: %d bytes\n",sizeof(my_int));
printf(" the size of short is: %d bytes\n",sizeof(my_short));
printf(" the size of long is: %d bytes\n",sizeof(my_long));
printf(" the size of float is: %d bytes\n",sizeof(my_float));
printf(" the size of double is: %d bytes\n",sizeof(my_double));
printf(" the size of char is: %d bytes\n",sizeof(my_char));
printf(" the size of unsigned intgar is: %d bytes\n",sizeof(my_unsigned_int));
printf(" the size of unsigned char is: %d bytes\n",sizeof(my_unsigned_char));
}