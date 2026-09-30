#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::abs;

int A(int p1[2], int p2[2]) {
    return abs(p1[0] - p2[0]);
}

int B(int p1[2], int p2[2]) {
    return abs(p1[1] - p2[1]);
}

int C_squared(int p1[2], int p2[2]) {
    int a = A(p1, p2);
    int b = B(p1, p2);

    return a * a + b * b;
}

int main() {
    int p1[2] = {1, 2};
    int p2[2] = {4, 3};

    cout << "A = " << A(p1, p2) << endl;
    cout << "B = " << B(p1, p2) << endl;
    cout << "C squared = " << C_squared(p1, p2) << endl;

    return 0;
}