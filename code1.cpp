//1)Write a program to display the array element.


#include <iostream>
using namespace std;
int main() {
    int array[] = {1, 2, 3, 4};
    int length = sizeof(array) / sizeof(array[0]);

    cout << "Array elements are:" << std::endl;
    for (int i = 0; i < length; ++i) {
        cout << array[i] << std::endl;
    }

    return 0;
}
