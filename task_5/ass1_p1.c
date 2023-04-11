#include<stdio.h>
#include<stdlib.h>

int main(){
    // Get the number of elements for the array
 int n1=4,n2=4,n3=8;
 int *ptr, *ptr1, *ptr2;    
    // Dynamically allocate memory using malloc()
  ptr = (int*) malloc(n1 * sizeof(int));
if (ptr == NULL) {
    printf("Memory not allocated.\n");
} else {
    printf("Memory successfully allocated using malloc.\n");
    // assign values to memory block
    for (int i = 0; i < n1; i++) {
        ptr[i] = i + 1;
    }
    // print values 
    printf("Our Values of ptr are: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", ptr[i]);
    }
}

	// Dynamically allocate memory using calloc()
ptr1 = (int*) calloc(n2, sizeof(int));
if (ptr1 == NULL) {
    printf("\nMemory not allocated.\n");
} else {
    printf("\nMemory successfully allocated using calloc.\n");
    // assign values to memory block
    for (int i = 0; i < n2; i++) {
        ptr1[i] = i + 1;
    }
    // print values of memory block
    printf("Our Values of ptr1 are: ");
    for (int i = 0; i < n2; i++) {
        printf("%d ", ptr1[i]);
    }
}

// allocate memory using realloc
ptr2 = (int*) realloc(ptr, n3 * sizeof(int));
if (ptr2 == NULL) {
    printf("\nMemory not allocated.\n");
} else {
    printf("\nMemory successfully newly allocated using realloc.\n");
    // assign values to memory block
    for (int i = n1; i < n3; i++) {
        ptr2[i] = i + 1;
    }
    // print values 
    printf("Our Values of ptr2 are: ");
    for (int i = 0; i < n3; i++) {
        printf("%d ", ptr2[i]);
    }
}

// free allocated memory
free(ptr);
free(ptr1);
free(ptr2);
return 0;
}