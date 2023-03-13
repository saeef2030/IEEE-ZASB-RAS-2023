#include<stdio.h>
int main()
{ 
int x[5]={2,4,6,8,10};
int *ptr=&x[0];
printf(" your array is :");
for(int i=0;i<5;i++)
printf(" %d ",*(ptr+i));
}
