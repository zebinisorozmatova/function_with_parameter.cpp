#include <iostream>
using namespace std;

void minNumber(int a, int b) {
    if (a < b) {
        cout << a;
    } else {
        cout << b;
    }
}

int main() {
    minNumber(8, 5);
    return 0;
}