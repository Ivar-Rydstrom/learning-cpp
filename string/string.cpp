#include <iostream>

using namespace std;

int main() {
    string phrase = "hello world";
    int index = phrase.find("w", 0);
    cout << phrase[index] << endl;
    return 0;
}