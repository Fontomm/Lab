#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Ведіть х ";
    cin >> x;
    cout << "Ведіть у ";
    cin >> y;

    if (y <= -x && y >= x && y >= -1)
        std::cout << "Знахоиться в середині виділеної області" << endl;
    else
        std::cout << "no" << endl;
    
    return 0;
}