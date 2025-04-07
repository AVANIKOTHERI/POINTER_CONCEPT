#include <stdio.h>

void printValue(int *ptr) {
    if (ptr != NULL) {
        printf("Value: %d\n", *ptr);
    } else {
        printf("Pointer is NULL. Cannot dereference.\n");
    }
}

int main() {
    int x = 10;
    int *p1 = &x;
    int *p2 = NULL;

    printValue(p1);  // Safe: p1 is not NULL
    printValue(p2);  // Safe: check prevents dereference

    return 0;
}
