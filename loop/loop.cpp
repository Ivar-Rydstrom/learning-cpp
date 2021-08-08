#include <iostream>

using namespace std;

int main() {
    int ans = 10;
    int guess;
    int guesses = 0;
    int guess_lim = 3;
    bool out = false;
    
    while (ans != guess && !out) {
        if (guesses < guess_lim) {
            cout << "Guess Number: ";
            cin >> guess;
            // cout << endl;
            guesses++;
        } else {
            out = true;
        }
    }
    if (out) {
        cout << "out of guesses";
    } else {
        cout << "Correct!";
    }

    return 0;
}