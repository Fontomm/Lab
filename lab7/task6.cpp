#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int guess;

    do {
        cin >> guess;

        if(guess > secret) cout << "Менше\n";
        else if(guess < secret) cout << "Більше\n";

    } while(guess != secret);

    cout << "Вгадав!";

    return 0;
}