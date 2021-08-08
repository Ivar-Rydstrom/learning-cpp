#include <iostream>

using namespace std;

int main() {
    int input;
    cout << "Input Age: ";
    cin >> input; // extractor operator from cin to recieve user input

    cin.clear(); // when combining the use of the extractor operator (>>) and getline,must clear and sync
    cin.sync(); //  cin to get rid of \n at end of last line which is not eaten by the extractor operator

    string name;
    cout << "Input Name: ";
    getline(cin, name); // gerline function to recieve multi-space strings (cin >> would ignore words after first space)

    cout << "okay " << name << ", nice to know  that you are " << input << " years old" << endl;

    return 0;
}