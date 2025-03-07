#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
    
        if (arr[mid] == key)
            return mid;
    
        if (arr[mid] < key)
            left = mid + 1;
        
        else
            right = mid - 1;
    }
    
    return -1;
}

int main() {
    int n, key;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter the key to search: ");
    scanf("%d", &key);
    
    int result = binarySearch(arr, 0, n - 1, key);
    if (result == -1)
        printf("Element %d is not present in the array.\n", key);
    else
        printf("Element %d is present at index %d.\n", key, result);
    
    return 0 ;
}
