#include<stdio.h>
#define clc Ascending_order
#ifdef clc
void Ascending_order(){
    int arr [10] ,fill;
    for(int i=0;i<10;i++){
        printf("please Enter your %d number: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j =0 ;j<10;j++){
        for(int z = j+1;z<10;z++){
            if (arr[z]<arr[j]){
                fill=arr[j];
                arr[j]=arr[z];
                arr[z]=fill;
            }
        }
    }
    printf("Your Numbers After Arranging them in Ascending order are:\n ");
    for(int i=0;i<10;i++){
        printf("%d\n",arr[i]);
    }
}
void Descending_order(){
    int arr [10] ,fill;
    for(int i=0;i<10;i++){
        printf("Enter Num %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(int j =0 ;j<10;j++){
        for(int z = j+1;z<10;z++){
            if (arr[z]>arr[j]){
                fill=arr[j];
                arr[j]=arr[z];
                arr[z]=fill;
            }
        }
    }
    printf("Your Numbers After Arranging them in Descending order are:\n ");
    for(int i=0;i<10;i++){
        printf("%d\n ",arr[i]);
    }
}
#endif
#ifndef clc
    #warning "define your function and try again"
#endif

int main(){
    clc();
}