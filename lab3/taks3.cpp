#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b;

    cout << "Ведіть a ";
    cin >> a;
    cout << "Ведіть b ";
    cin >> b;

    if (a >= 15 && b != 15 && b < 15)
        std::cout << "yes 1" << endl;
    else if (b >= 15 && a != 15 && a < 15)
        std:: cout << "yes 2" << endl;
    else 
        std::cout << "no" << endl;

    return 0;
}
