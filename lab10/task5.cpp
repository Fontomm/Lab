#include <iostream>
using namespace std;

int main() {
    double a[5];

    for(int i = 0; i < 5; i++) cin >> a[i];

    for(int i = 0; i < 5 - 1; i++) {
        for(int j = 0; j < 5 - 1 - i; j++) {
            if(a[j] < a[j+1]) swap(a[j], a[j+1]);
        }
    }

    cout << "Відсортований масив: ";
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    double diff = a[0] - a[4];
    cout << "Різниця між max і min: " << diff;
}