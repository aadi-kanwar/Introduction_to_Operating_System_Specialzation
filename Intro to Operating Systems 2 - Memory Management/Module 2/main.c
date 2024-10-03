#include "mymalloc.h"
#include <stdio.h>
#include <string.h>

int main() {
    // Allocate memory for a string
    char* str = (char) MyMalloc(10 sizeof(char));
    strcpy(str, "Hello World");
    printf("%s\n", str);

    // Allocate memory for an integer array
    int* arr = (int) MyMalloc(5 sizeof(int));
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    MyFree(str);
    MyFree(arr);

    return 0;
}