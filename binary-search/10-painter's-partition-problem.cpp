#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int k, int mid) {
    int painterCount = 1;
    int boardSum = 0;

    for (int i = 0; i < n; i++) {

        if (boardSum + arr[i] <= mid) {
            boardSum += arr[i];
        }
        else {
            painterCount++;

            if (painterCount > k || arr[i] > mid) {
                return false;
            }

            boardSum = arr[i];
        }
    }

    return true;
}

int painterPartition(int arr[], int n, int k) {

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int start = 0;
    int end = sum;
    int ans = -1;

    while (start <= end) {

        int mid = start + (end - start) / 2;

        if (isPossible(arr, n, k, mid)) {
            ans = mid;
            end = mid - 1;
        }
        else {
            start = mid + 1;
        }
    }

    return ans;
}

int main() {

    int arr[] = {5, 5, 5, 5};
    int n = 4;
    int k = 2;

    cout << "Minimum time required: "
         << painterPartition(arr, n, k) << endl;

    return 0;
}