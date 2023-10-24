#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, minIdx;

    for (i = 0; i < n-1; i++) {
        minIdx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx])
                minIdx = j;
        }

        // Swap the found minimum element with the element at index i
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
