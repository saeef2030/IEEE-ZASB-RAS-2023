#include<stdio.h>
#define my_sizeof(type) (char *)(&type+1)-(char *)(&type)

inline int my_sizeofinline(int type){
    return (char *)(&type+1)-(char *)(&type);}
int main(){
    double x,y;
    printf("The size of variable using macro is= %d byte\n",my_sizeof(x));
    printf("The size of variable using inline function is= %d byte\n",my_sizeofinline(y));
}
/*The main difference between inline and macro functions is that inline functions are parsed by the compiler,whereas macros in a program are expanded by the preprocessor.
The keyword "inline" is used to define an inline function, whereas "#define" is used to define a macro inline and macro can improve program performance and reduce redundancy. 
Inline functions can increase code size and compile time, while macro functions can make errors if used improperly.
Macro functions are expanded by the preprocessor before the compilation, macro functions are faster inline functions
whereas inline functions are done at compile time which can improve program performance by eliminating 
the overhead associated with function calls.
Inline functions are generally simple and are more effective when used with functions that are called frequently
*/