#include<iostream>
#include<vector>

using namespace std;

int main() {
    int x;
    cout<<"This code is Selection Sort Algorithm"<<endl;
    cout << "Enter the size of memory" << endl;
    cin >> x;

    vector<int> arr(x);
    cout << "Enter the elements: ";
    for (int i = 0; i < x; i++) {
        cin >> arr[i];
    }

    // Selection Sort Algorithm
    for (int i = 0; i < x - 1; i++) {
        int minIndex = i;

        // Find the index of the minimum element in the unsorted part
        for (int j = i + 1; j < x; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the minimum element with the current element
        swap(arr[i], arr[minIndex]);
    }

    cout << "Sorted array: ";
    for (int i = 0; i < x; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
