#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    int gcd_value = gcd(num1, num2);
    int lcm_value = (num1 * num2) / gcd_value;

    cout << "GCD: " << gcd_value << endl;
    cout << "LCM: " << lcm_value << endl;

    return 0;
}
