#include <iostream>
using namespace std;

void checkNegative(int x) {
    if (x < 0) {
        cout << "Negative number";
    }
}

int main() {
    checkNegative(-3);
    return 0;
}