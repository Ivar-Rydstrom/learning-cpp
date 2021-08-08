#include <iostream>
// #include <cmath>
#include <ctime>

using namespace std;

void display(const int size, int nums[]);

int main() {
    const int size = 10;

    int nums[size];

    srand(time(NULL)); // seed rand using current time (from ctime module)
    for (int i = 0; i < size; i++) {
        nums[i] = rand() % 10;
    }

    display(size, nums);

    return 0;
}

void display(const int size, int nums[]) {
    for (int i = 0; i < size; i++) {
        cout << nums[i] << " ";
    }
    return;
}