#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t size = 100000000000000000;  // Request a very large amount of memory

    // Attempt to allocate memory without checking the return value
    int *arr = (int *)malloc(size * sizeof(int));
    if(!arr)
        return(1);
    // Dereference the pointer without checking if it is NULL
    *arr = 42;

    // The program may crash if malloc failed, and arr is NULL

    // Don't forget to free the allocated memory when done (if it was successfully allocated)
    free(arr);

    return 0;
}
