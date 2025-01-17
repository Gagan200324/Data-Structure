#include <stdio.h>
int main() {
    int size, key, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int numbers[size]; // Declare the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    for (int i = 0; i < size; i++) {
        if (numbers[i] == key) {
            printf("Element %d found at index: %d\n", key, i);
            found = 1;
            break; 
        }
        else
        printf("Element %d not found");
return 0;
}
}
