#include <iostream>

using namespace std;

int power(int x, int y) {
    if (y == 0) return 1;
    int half = power(x, y / 2);
    if (y % 2 == 0) return half * half;
    else return x * half * half;
}

int main() {

    cout << power(2, 8) << endl;
    cout << power(3, 5);

    return 0;
}
