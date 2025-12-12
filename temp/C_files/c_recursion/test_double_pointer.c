#include <stdio.h>

void modify_ptr(int *ptr) {
    ptr = NULL; // Only affects the local copy of ptr
}

void modify_ptr_ptr(int **ptr) {
    *ptr = NULL; // Affects the original pointer
}

int main() {
    int x = 5;
    int *ptr = &x;

    printf("original addteas of ptr: %p\n", (void *)ptr);

    modify_ptr(ptr);
    printf("address when modified with a singke pointer: %p\n", (void *)ptr); // Still prints the original address

    modify_ptr_ptr(&ptr);
    printf("Address when mofified with a double pointer: %p\n", (void *)ptr); // Prints NULL
    return 0;
}
