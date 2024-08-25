#include <iostream>
#include <vector>
using namespace std;

int findFirstOccurrence(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int findLastOccurrence(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            left = mid + 1; 
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}

int totalOccurrences(vector<int> arr, int target) {
    int firstOccurrence = findFirstOccurrence(arr, target);
    if (firstOccurrence == -1) {
        return 0;
    }

    int lastOccurrence = findLastOccurrence(arr, target);
    return lastOccurrence - firstOccurrence + 1;
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 3, 3, 5};
    int target = 3;

    int total = totalOccurrences(arr, target);
    int lastOccurrenceIndex = findLastOccurrence(arr, target);
    int firstOccurrenceIndex = findFirstOccurrence(arr, target);
    if (firstOccurrenceIndex != -1) {
        cout << "The first occurrence of " << target << " is at index " << firstOccurrenceIndex << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
    if (lastOccurrenceIndex != -1) {
        cout << "The last occurrence of " << target << " is at index " << lastOccurrenceIndex << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }
    if (total > 0) {
        cout << "The total number of occurrences of " << target << " is " << total << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}
