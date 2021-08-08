#include <iostream>

using namespace std;

int main() {
    string name1 = "jimmy";
    string name2 = "john";
    string name = name1 + name2;
    int j = 0;

    for (int i = 0; i < 10; i++, j++) {
        cout << "Hello " << name << j << endl;
    }
    return 0;
}