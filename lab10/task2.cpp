#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a[10];

    for(int i = 0; i < 10; i++) a[i] = rand() % 100;

    cout << "Початковий масив: ";
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << endl;

    for(int i = 0; i < 10 - 1; i++) {
        for(int j = 0; j < 10 - 1 - i; j++) {
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }

        cout << "Після проходу " << i+1 << ": ";
        for(int k = 0; k < 10; k++) cout << a[k] << " ";
        cout << endl;
    }
}