#include <iostream>

// Recursive binary search on a sorted array.
// Returns index of target if found; -1 otherwise.
int binary_search(int arr[], int left, int right, int target) {
    if (left > right) {
        // Base case: range is empty.
        return -1;
    }

    // Avoid overflow when computing midpoint.
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    if (arr[mid] < target) {
        // Search in the right subarray.
        return binary_search(arr, mid + 1, right, target);
    }
    // Search in the left subarray.
    return binary_search(arr, left, mid - 1, target);
}

int main() {
    // Input sorted array for binary search.
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Searching for " << target << " in ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << (i + 1 == size ? "" : ", ");
    }
    std::cout << std::endl;

    // Search between first index 0 and last index size - 1.
    int idx = binary_search(arr, 0, size - 1, target);
    if (idx == -1) {
        std::cout << target << " not found" << std::endl;
    } else {
        std::cout << "Found " << target << " at index " << idx << std::endl;
    }

    return 0;
}