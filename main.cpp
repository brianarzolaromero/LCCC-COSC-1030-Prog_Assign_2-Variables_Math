#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, c, d;      // store the 4 integers
    cin >> a >> b >> c >> d;  // read in the numbers

    // integer math: product and average with integer division
    cout << a * b * c * d << " " << (a + b + c + d) / 4 << endl;

    // floating-point math: product and average with 3 decimal places
    cout << fixed << setprecision(3);
    cout << 1.0 * a * b * c * d << " " << (a + b + c + d) / 4.0 << endl;
}