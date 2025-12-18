#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x * x;
}

int main() {
    double x, y;
    cout << "Введіть два числа: ";
    if (!(cin >> x >> y)) {
        cout << "Некоректний ввід!" << endl;
        return 1;
}

    double a;
    if (x > y) {
        a = cbrt(fabs(f(x) - y)) + tan(f(x));
}
    else if (y > x) {
        a = pow(y - f(x), 3) + cos(f(x));
}
    else {
        a = pow(y + f(x), 2) + pow(x, 3);
}

    cout << "Результат: " << a << endl;
    return 0;
}