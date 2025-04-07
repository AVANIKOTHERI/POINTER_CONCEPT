#include <stdio.h>
#include <stdlib.h>

void printValue(int *ptr) {
    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
    } else {
        printf("Invalid memory location (NULL pointer).\n");
    }
}

int main() {
    int *validPtr = (int *)malloc(sizeof(int));  // dynamically allocated
    int *nullPtr = NULL;

    if (validPtr != NULL) {
        *validPtr = 42;
    }

    printValue(validPtr);  // Safe: validPtr points to allocated memory
    printValue(nullPtr);   // Safe: will not dereference

    free(validPtr);  // free the memory to avoid memory leak

    return 0;
}
