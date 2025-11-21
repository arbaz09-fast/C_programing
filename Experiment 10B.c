/* Name : ARBAAZ SHAIKH
Branch :Mechanical F1
UIN : 251M014*/
#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *ptr = arr + size - 1; // Initialize pointer to the last element

    printf("Array elements in reverse order: ");

    // Loop from the last element to the first
    while (ptr >= arr) {
        printf("%d ", *ptr); // Print the element pointed to by ptr
        ptr--;               // Decrement the pointer to move to the previous element
    }
    printf("\n");

    return 0;
}
