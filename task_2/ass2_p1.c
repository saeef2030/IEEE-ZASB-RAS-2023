#include <stdio.h>
void add(int x)
{
   printf("%d + 1 = %d\n",x, x + 1);
}
int main()
{
   void (*p)(int);
   p = &add; 
   (*p)(99);
}
