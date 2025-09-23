#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

float findMedian(int arr[], int n) {
    // to create a copy inorder to avoid modifying original array
    int temp[n];
    for(int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    
    qsort(temp, n, sizeof(int), compare);
    
    printf("Sorted array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");
    
    if(n % 2 != 0) {
        return (float)temp[n/2];
    } else {
        return (float)(temp[(n-1)/2] + temp[n/2]) / 2.0;
    }
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
    
    printf("\nOriginal array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    float median = findMedian(arr, n);
    printf("Median: %.2f\n", median);
    
    return 0;
}
