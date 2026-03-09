#include <iostream>
using namespace std;

void checkPositive(int x) {
    if (x > 0) {
        cout << "Positive number";
    }
}

int main() {
    checkPositive(5);
    return 0;
}