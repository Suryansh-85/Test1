#include <iostream>
#include <vector>

using namespace std;

int MultiplesOf3(const vector<int>& arr) {
    int count = 0;
    for (int num : arr) {
        if (num % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid Input" << endl;
        return 1;
    }

    vector<int> arr(n);
    
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < 0) {
            cout << "Invalid Input" << endl;
            return 1;
        }
    }

    int result = MultiplesOf3(arr);
    cout << "Count of multiples of 3: " << result << endl;

    return 0;
}
