#include<stdio.h>
int main()
{   int inputArray[100] , rev[100];  
    int i, j, elementCount, count = 0;  
    printf("please Enter Number of Elements sir:\n");
    scanf("%d", &elementCount);
    printf("Enter your %d numbers\n", elementCount);
    for(i = 0; i < elementCount; i++){
       
        scanf("%d", &inputArray[i]);
        rev[i]= -1;
    }
  clc(inputArray,elementCount);
    return 0;
}

int clc(int arr[],int elements) 
{int i,j,rev[elements] , flag=-1;
    for(i=0; i<elements; i++){
        int count=1;
        for(j=i+1; j<elements; j++)
        {
		 if(arr[i]==arr[j]){
            {
             count++;
             rev[j]=flag;
            }
         }
        }
       if(rev[i]!=flag)
        {
          rev[i]=count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<elements; i++)
    {
        if(rev[i]!=flag)
        {
            printf("%d occurs %d times\n", arr[i], rev[i]);
        }
    }
    
 
}