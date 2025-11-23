#include <iostream>
#include <cstring>

int binary_search(int *arr, int n) {
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    if (arr_size == 1) {
        return arr[0];
    }
    if (n > arr[arr_size/2]) {
        int *new_arr = new int[arr_size - arr_size/2];
        std::memcpy(new_arr, arr + arr_size/2, (arr_size - arr_size/2) * sizeof(int));
        return binary_search(new_arr, n);
    } else {
        int *new_arr = new int[arr_size/2];
        std::memcpy(new_arr, arr, (arr_size/2) * sizeof(int));
        return binary_search(new_arr, n);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::cout << binary_search(arr, 7) << std::endl;
    return 0;
}