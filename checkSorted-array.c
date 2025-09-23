#include <stdio.h>
#include <stdbool.h>

bool isSorted(int arr[], int n) {
    bool ascending = true;
    bool descending = true;
    
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) ascending = false;
        if(arr[i] < arr[i+1]) descending = false;
    }
    
    return ascending || descending;
}

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    
    printf("\nArray: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    if(isSorted(arr, n)) {
        printf("The array is sorted.\n");
        
        // Check which type of sorting
        if(arr[0] <= arr[n-1]) {
            printf("Sorting order: Ascending\n");
        } else {
            printf("Sorting order: Descending\n");
        }
    } else {
        printf("The array is NOT sorted.\n");
    }
    
    return 0;
}
