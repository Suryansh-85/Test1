//2)write a progam to find the  max 
//element from the list


#include <iostream>
using namespace std;
int main() {
    int array[] = {9, 2, 5, 7, 10};
    int length = sizeof(array) / sizeof(array[0]);

    int maxElement = array[0];

    for (int i = 1; i < length; ++i) {
        if (array[i] > maxElement) {
            maxElement = array[i];
        }
    }
    cout << "The maximum element is: " << maxElement << endl;
    return 0;
}
