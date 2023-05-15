#include <stdio.h>

#define MAX_SIZE 100

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int arr[], int low, int high)
{
    int mid_element = arr[low];
    while (low < high) {
        while (low < high && arr[high] >= mid_element) {
            high--;
        }
        arr[low] = arr[high];
        while (low < high && arr[low] <= mid_element) {
            low++;
        }
        arr[high] = arr[low];
    }
    arr[low] = mid_element;
    return low;
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int main() {
    int arr[MAX_SIZE], n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    quicksort(arr, 0, n - 1);
    printf("The sorted array is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
