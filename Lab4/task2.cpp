#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x , y;
    cin >> x;

    if(x < 0) {
        y = pow(x,3) - 2 * x;
        cout << y;
    }
    else if (0 <= x && x <= 3) {
        y = sqrt(x + 1);
        cout << y;
    }
    else if (x > 3) {
        y = pow(x,2) + 1;
        cout << y;
    }
}