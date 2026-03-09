#include <iostream>
using namespace std;

void checkAge(int age) {
    if (age >= 18) {
        cout << "Adult";
    }
}

int main() {
    checkAge(20);
    return 0;
}