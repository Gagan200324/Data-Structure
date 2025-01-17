#include <stdio.h>

int main() {
    int size, key, low, high, mid, found = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int numbers[size]; 
    printf("Enter %d elements of the array in sorted order:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &numbers[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    low = 0;
    high = size - 1;
    while (low <= high) {
        mid = (low + high) / 2;
    if (numbers[mid] == key) {
            printf("Element %d found at index: %d\n", key, mid);
            found = 1;
            break;
        } else if (numbers[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }
   return 0;
}
