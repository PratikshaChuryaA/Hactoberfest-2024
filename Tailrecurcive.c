#include <stdio.h>

void reverse_tail_recursive(int arr[], int start, int end) {
    // Base case: when start index is greater than or equal to end index
    if (start >= end) {
        return;
    }
    // Swap the elements at start and end
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    // Tail recursive call
    reverse_tail_recursive(arr, start + 1, end - 1);
}

int main() {
    int n;

    // Asking user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n]; // Declaring array with size provided by user

    // Input array elements from the user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the tail recursive reverse function
    reverse_tail_recursive(arr, 0, n - 1);

    // Print the reversed array
    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
