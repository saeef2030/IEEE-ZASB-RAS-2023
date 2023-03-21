#include<stdio.h>
typedef enum {
  Addition,
  Subtraction,
  Product,
  Division,
  Reminder
}arithmetic_operations;
int main(){
    arithmetic_operations oper;
    int num1,num2;
    char operation;
    
    printf("Please Enter your First Number: ");
    scanf("%d",&num1);
    printf("Please Enter your Second Number: ");
    scanf("%d",&num2);
    printf("Pease Choose your operation [ +, -, *, /, %%]: ");
    getchar();
    operation=getchar();
    switch (operation)
    {
    case '+':
     oper = Addition;
     break;
    case '-':
     oper = Subtraction;
     break;
    case '*':
     oper = Product;
     break;
    case '/':
     oper = Division;
     break;
    case '%':
     oper = Reminder;
     break;
    default:
     printf(" ERROR: Invalid Operation, Please try again\n ");
     break;
    }
switch (oper){
    case Addition:
    printf("Addition: %d + %d = %d \n", num1, num2, num1+num2);
    break;
    case Subtraction:
    printf("Subtraction: %d - %d = %d \n", num1, num2, num1-num2);
    break;
    case Product:
    printf("Product: %d * %d = %d \n", num1, num2, num1*num2);
    break;
    case Division:
    printf("Division: %d / %d = %d \n", num1, num2, num1/num2);
    break;
    case Reminder:
    printf("Remider: %d %% %d = %d \n", num1, num2, num1%num2);
    break;
    default:
    printf("ERROR: Invalid Operation, Please try again\n");
    break;
}
  printf("The Size of enum is: %d bytes",sizeof(oper));
  /*In our compiler, the size of enum is 4 bytes because the enum is stored as an int that ifwe add extra members 
    the size of it remains the same*/
}