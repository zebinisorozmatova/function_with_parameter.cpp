#include <iostream>
using namespace std;

void maxNumber(int a, int b) {
    if (a > b) {
        cout << a;
    } else {
        cout << b;
    }
}

int main() {
    maxNumber(8, 5);
    return 0;
}