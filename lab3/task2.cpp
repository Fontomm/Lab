#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x, y;

    cout << "Ведіть число ";
    cin >> x;

    if (x > 10 && x <= 20 )
        std::cout << "yes" << endl;
    else
        std::cout << "no" << endl;
    
    return 0;
}
