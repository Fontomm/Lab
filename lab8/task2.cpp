#include <iostream>
using namespace std;

int main() {
    double t[7], sum = 0;

    for(int i = 0; i < 7; i++) {
        cin >> t[i];
        sum += t[i];
    }

    cout << sum / 7;

    return 0;
}