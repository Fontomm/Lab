#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x , y , z;
    cout << "Введіть x, y , z: ";
    cin >> x >> y >> z;

    double Pengvin = max(x, max(y, z));
    double Fren = min(x, min(y, z));

    double denominator = cos(x + y) + Pengvin * Fren;
    
    if (denominator == 0) {
        cout << "Ділення на нуль неможливе." << endl;
    } else {
        double u = (Pengvin -2 * Fren) / denominator;
        cout << "u = " << u << endl;
    }

    return 0;
    }
    