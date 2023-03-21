
#include <stdio.h>
typedef struct{
float real;
float imag;
}complex;

complex add(complex n1,complex n2);

int main()
{
complex n1,n2,clc;
printf(" The First complex number Enter real and imaginary respectively:\n");
scanf("%f%f",&n1.real,&n1.imag);
printf("The Second complex number Enter real and imaginary respectively:\n");
scanf("%f%f",&n2.real,&n2.imag);
clc=add(n1,n2);
printf("Sum = %.2f+%.2fi",clc.real,clc.imag);
}

complex add(complex n1,complex n2)
{
complex number;
number.real=n1.real+n2.real;
number.imag=n1.imag+n2.imag;
return(number);
}