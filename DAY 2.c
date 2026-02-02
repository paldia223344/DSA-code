#include <stdio.h>

int main() {
    int n, pos, i;
    
    // Input size of array
    scanf("%d", &n);
    
    int arr[n];
    
    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Input position to delete (1-based)
    scanf("%d", &pos);
    
    // Validate position
    if (pos < 1 || pos > n) {
        printf("Invalid position");
        return 0;
    }
    
    // Shift elements to the left from pos
    for (i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    // Print updated array (