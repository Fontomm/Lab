#include <iostream>
using namespace std;

int main() {

    int x = 1;
    while(x < 10) {
        cout << x << " ";
        x++;
    }

    cout << endl;

    int y = 0;

    do {
        cout << y << " ";
        y++;
    } while(y < 5);

    return 0;
}