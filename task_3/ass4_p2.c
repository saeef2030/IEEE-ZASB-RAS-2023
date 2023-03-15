#include<stdio.h>
typedef struct
{
    struct shops{
        char *name;
        char *location;
    };
       struct product_info{
        int id;
        float price;
        int quantity;
    };
    struct category{
        int id_category;
        int products_num;
    };    
} database;
int main(){
    printf("The Size of the parent struct {database} is: %d",sizeof(database));
    printf("\nThe Size of the struct {shops} is: %d",sizeof(struct shops));
    printf("\nThe Size of the struct {product_info} is: %d",sizeof(struct product_info));
    printf("\nThe Size of the struct {category} is: %d",sizeof(struct category));
} 


    
    /*When the variables are declared in a structure, the compiler allocates memory to each variables member.
     The size of a structure is equal or greater to the sum of the sizes of each data member.	
    When the variable is declared in the union, the compiler allocates memory to the largest size variable member.
     The size of a union is equal to the size of its largest data member size. */ 

