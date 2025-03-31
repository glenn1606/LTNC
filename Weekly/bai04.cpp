#include <iostream>
using namespace std;

int binarySearchRecursive(int arr[], int left, int right, int target) {
    if (left > right) return -1; // Không tìm thấy

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    if (arr[mid] > target) return binarySearchRecursive(arr, left, mid - 1, target);

    return binarySearchRecursive(arr, mid + 1, right, target);
}

int main() {
    int n, target;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> target;

    int result = binarySearchRecursive(arr, 0, n - 1, target);

    if (result != -1)
        cout << "Tim thay " << target << " tai vi tri: " << result << endl;
    else
        cout << "Khong tim thay " << target << endl;

    return 0;
}
