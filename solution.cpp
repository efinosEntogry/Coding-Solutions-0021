#include <iostream>

using namespace std;

int power(int x, int y) {
    if (y == 0) return 1;
    if (y % 2 == 0) {
        return power(x, y / 2) * power(x, y / 2);
    }else {
        return x * power(x, y - 1);
    }
}

int main() {

    cout << power(3, 5);

    return 0;
}
