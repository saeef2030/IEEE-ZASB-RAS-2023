#include<stdio.h>
typedef union
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
    printf("The Size of the union is: %d",sizeof(database));
    printf("\nThe Size of the struct {shops} is: %d",sizeof(struct shops));
    printf("\nThe Size of the struct {product_info} is: %d",sizeof(struct product_info));
    printf("\nThe Size of the struct {category} is: %d",sizeof(struct category));
} 

