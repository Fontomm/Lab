#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int arr[10];

    for(int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    cout << "Масив випадкових чисел: ";
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}