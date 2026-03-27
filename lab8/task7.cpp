#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int a[20];
    int pos = 0, neg = 0, zero = 0;

    for(int i = 0; i < 20; i++) {
        a[i] = rand() % 101 - 50;

        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }

    cout << "Позитивні: " << pos << endl;
    cout << "Негативні: " << neg << endl;
    cout << "Нулі: " << zero << endl;

    return 0;
}