#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;

    if (a == 0) {
    cout << "Це не квадратне рівняння." << endl;
    return 0;
}

    double D = b * b - 4 * a * c;
    cout << "Дискримінант D = " << D << endl;

    if (D > 0) {
    double x1 = (-b + sqrt(D)) / (2 * a);
    double x2 = (-b - sqrt(D)) / (2 * a);
    cout << "Два корені:" << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
}
    else if (D == 0) {
    double x = -b / (2 * a);
    cout << "Один корінь:" << endl;
    cout << "x = " << x << endl;
}
    else {
    cout << "Дійсних розв’язків немає." << endl;
}
    return 0;
}