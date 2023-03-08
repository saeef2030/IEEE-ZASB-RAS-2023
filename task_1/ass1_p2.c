#include <stdio.h>   
int main() {  
    int inputArray[100];  
    int i, j, elementCount, count = 0;  
    printf("please Enter Number of Elements sir:\n");
    scanf("%d", &elementCount);
    printf("Enter your %d numbers\n", elementCount);
    for(i = 0; i < elementCount; i++){
        scanf("%d", &inputArray[i]);
    }
    printf("\nThe unique elements found in your array are: \n");
    for(i=0; i<elementCount; i++)
    {
        count=0;
        for(j=0; j<elementCount+1; j++)
        {
         if (i!=j)
         {
		    if(inputArray[i]==inputArray[j])
            {
             count++;
            }
         }
        }
       if(count==0)
        {
          printf("%d ",inputArray[i]);
        }
    }
}  
