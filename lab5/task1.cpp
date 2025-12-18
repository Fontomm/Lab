#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) cout << "Євразія";
    else if (n == 2) cout << "Антарктида";
    else if (n == 3) cout << "Південна Америка";
    else if (n == 4) cout << "Північна Америка";
    else if (n == 5) cout << "Австралія";
    else if (n == 6) cout << "Африка";
    else cout << "Невірний номер";

    return 0;
}
