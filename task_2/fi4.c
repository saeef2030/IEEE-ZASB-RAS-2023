#include <stdio.h>
static int v =120;//The static modifier may be applied to global variables.
//When this is done, it causes that variable's scope to be restricted to the file in which it is declared.

int inc_fi4()
{
    v++;
}
/*In C, functions are global by default. The "static" keyword before a function name makes it static.
Unlike global functions in C, access to static functions is restricted to the file where they are declared.
Another reason for making functions static can be reuse of the same function name in other files.
*/