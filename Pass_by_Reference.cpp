// Pass by Reference in Array (C++) means passing the actual array (not a copy) to a function — so any change made inside the function affects the original array in the calling function.
#include <iostream>
using namespace std;

void changeArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;   
    }
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    cout << "Before function call: ";
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";

    changeArray(numbers, 5);  // array passed by reference

    cout << "\nAfter function call: ";
    for (int i = 0; i < 5; i++)
        cout << numbers[i] << " ";

    return 0;
}